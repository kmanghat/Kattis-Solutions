#include <bits/stdc++.h>

using namespace std;

struct comp{
	bool operator()(const pair<string,int> &lhs, const pair<string,int> &rhs)
	{
		if(lhs.second == rhs.second)
			return lhs.first < rhs.first;
		return lhs.second > rhs.second;
	}
};
int main()
{
	string command;
	map<string, int> holder;
	int c = 1;
	queue<vector<string>> days;
	while(cin>>command)
	{
		string word;
		if(command == "<text>")
		{
			vector<string> day;
			while(cin>>word && word != "</text>")
			{
				if(word.length() >= 4)
				{
					holder[word]++;
					day.push_back(word);
				}
			}
			
			days.push(day);
			
			if(days.size() > 7)
			{
				for(int m = 0; m < days.front().size(); m++)
				{
					--holder[days.front()[m]];		
				}
				
				days.pop();
			}
			
		}
		
		else
		{
			int n;
			cin>>n;
			string t;
			cin>>t;
			
			cout<<command<<" "<<n<<">"<<endl;
			vector<pair<string,int>> vec(holder.begin(),holder.end());
			sort(vec.begin(),vec.end(), comp());
			
			for(int i = 0 ; i < n ; i++)
			{
				cout<<vec[i].first<<" "<<vec[i].second<<endl;
			}
			
			bool end = false;
			for(int i = n ; !end; i++)
			{
				if(vec[i-1].second == vec[i].second)
				{
					cout<<vec[i].first<<" "<<vec[i].second<<endl;
				}
				else
				{
					end = true;
				}
			}
			cout<<"</top>"<<endl;
			
		}
		

	}

	return 0;
}
