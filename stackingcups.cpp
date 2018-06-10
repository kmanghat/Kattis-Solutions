#include <bits/stdc++.h>

using namespace std;

struct comp
{
	bool operator()(const pair<string,int> &lhs, const pair<string,int> &rhs)
	{
		return lhs.second > rhs.second;
	}
};

int main()
{
	int n;
	cin>>n;
	
	vector<pair<string,int>> cups;
	cups.resize(n);
	for(int i = 0; i < n;i++)
	{
		string a,b;
		
		cin>>a>>b;
		int temp;
		if(isdigit(a[0]))
		{
			temp = stoi(a);
			temp /= 2;
			cups.push_back(make_pair(b,temp));
		}
		else
		{
			temp = stoi(b);
			cups.push_back(make_pair(a,temp));
		}
	}
	
	sort(cups.begin(),cups.end(),comp());
	
	for(int i = n-1; i >= 0; i--)
		cout<<cups[i].first<<endl;
		
		
	return 0;
}
