#include <bits/stdc++.h>

using namespace std;


struct comp
{
	bool operator()(const pair<string,int> &lhs, const pair<string,int> &rhs)
	{
		return lhs.second < rhs.second;
	}
};

int main()
{
	int n;
	while(cin>>n && n != 0)
	{
		vector<pair<string,int>> holder;
		for(int i = 0; i < n; i++)
		{
			string time,half;
			string space = " ";
			cin>>time>>half;
			string temp = time+space+half;
		
			string token = time.substr(0,time.find(":"));
			int hrs = stoi(token);
			
			if(hrs == 12 && half == "a.m.")
				hrs = 0;
				
			if(hrs == 12 && half == "p.m.")
				hrs = 12;
				
			time.erase(0,time.find(":")+1);
			int min = stoi(time);
			
			
			
			if(half == "p.m." && hrs != 12)
			{
				hrs += 12;
			}
			
			min += 60*hrs;
			
				
			holder.push_back(make_pair(temp,min));
		}
		
		
		sort(holder.begin(),holder.end(),comp());
		for(int i = 0; i < holder.size(); i++)
		{
			cout<<holder[i].first<<endl;
		}
		cout<<endl;
	}

	return 0;
}
