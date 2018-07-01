#include <bits/stdc++.h>

using namespace std;

vector<int> adj[1000000];
vector<bool> visited(1000000, false);
vector<int> order;

//Toposort 
void toposort(int u)
{
	if(visited[u])
		return;
		
	visited[u] = true;
	
	for(int i = 0; i < adj[u].size(); i++)
	{
		int v = adj[u][i];
		toposort(v);
	}
	
	order.push_back(u);
}

//Split string spaces
void split(vector<string>& ans, string& s) 
{
    ans.push_back("");
    for(auto i : s) 
    {
        if(i == ' ')
        {
            ans.push_back("");
        }
        else 
        {
            ans.back().push_back(i);
        }
    }
}

int main()
{
	int n;
	cin>>n;
	
	map<string,int> convert;
	vector<string> idx;
	
	cin.ignore();
	for(int i = 0; i < n; i ++)
	{
		string in;
		getline(cin, in);
	
		vector<string> ans;
		split(ans,in);
		
		//remove colon
		ans[0].pop_back();
		
		for(int j = 0; j < ans.size(); j++)
		{
			if(convert.count(ans[j]) == 0)
			{
				convert[ans[j]] = idx.size();
				idx.push_back(ans[j]);
			}
		}
		
		//Create adjacency list
		int f = convert[ans[0]];
		for(int k = 1; k < ans.size(); k++)
		{
			adj[convert[ans[k]]].push_back(f);
		}
	}
	
	string s;
	
	cin>>s;
	int start = convert[s];
	
	toposort(start);
	
	//Print in reverse order
	for(int i = order.size()-1; i >= 0; i--)
	{
		cout<<idx[order[i]]<<endl;
	}
	return 0;
}
