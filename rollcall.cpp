#include <bits/stdc++.h>

using namespace std;

struct comp
{
	bool operator()(const pair<string,string> &lhs, const pair<string,string> &rhs)
	{
		if(lhs.second == rhs.second)
			return lhs.first < rhs.first;
			
		return rhs.second > lhs.second;
	}
};
int main()
{
	vector <pair<string,string>> names;
	string f,l;
	int c = 0;
	while(cin>>f && cin>>l)
	{	
		names.push_back(make_pair(f,l));
		
	} 
	
	sort(names.begin(), names.end(),comp());
	for(int i = 0 ; i < names.size(); i++)
		{
			bool found = false;
			for(int j = 0 ; j < names.size(); j++)
			{
				if(names[i].first == names[j].first && j != i)
					found = true;
			}
			
			if(found)
				cout<<names[i].first<<" "<<names[i].second;
			else
				cout<<names[i].first;
			cout<<endl;
		}
	return 0;
}
