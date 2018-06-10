#include <bits/stdc++.h>

using namespace std;

struct comp
{
	bool operator()(const string &lhs, const string &rhs)
	{
		if(rhs[0] == lhs[0])
			return lhs[1] < rhs[1];
			
		return lhs[0] < rhs[0];
	}
};

int main()
{
	int n;
	
	
	while(cin >> n && n!= 0)
	{
		string in;
		vector <string> holder;
		for(int i = 0; i < n; i++)
		{
			cin>>in;
			holder.push_back(in);
		}
		
		stable_sort(holder.begin(),holder.end(),comp());
		
		for(int i = 0; i < holder.size(); i++)
		{
			cout<<holder[i]<<endl;
		}
		cout<<endl;
	}
	return 0;
}
