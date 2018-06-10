//Inefficient solution but gets it within the 7 second limit
#include <bits/stdc++.h>

using namespace std;

struct comp
{
	bool operator()(const pair<long long int,vector<long long int>>&lhs, const pair<long long int,vector<long long int>> &rhs)
	{
		return lhs.first < rhs.first;
	}
};

void doCase(long long int n)
{
	long long int in;
	cin>>in;
	vector<long long int > holder;
	long long int t;
	for(long long int i = 0 ; i < in; i++)
	{
		cin>>t;
		holder.push_back(t);
	}

	vector<pair<long long int,vector<long long int>>> sums;
	vector<long long int> sets;
	//calculate total possible sets
	long long int c = 0;
	long long int sum = 0;
	//loop from 00000 to 111111..
	for(long long int subset = 0; subset < (1<<in); subset++)
	{
		long long int sum = 0;
		sets.clear();
		for(long long int i = 0; i < in; i++)
		{
			if((subset&(1<<i)) != 0)
			{
				sum += holder[i];
				sets.push_back(holder[i]);
			}	
		}
		
		sums.push_back(make_pair(sum,sets));
	}
	
	sort(sums.begin(), sums.end(), comp());
	
	cout<<"Case #"<<n<<":"<<endl;
	bool found = false;
	for(long long int i = 0; i < sums.size() && !found; i++)
	{
		long long int count = 0;
		for(long long int k = i+1; k < sums.size() && !found; k++)
		{
			if(sums[i].first == sums[k].first)
			{
				if(count == 0)
				{
					for(long long int j = 0; j < sums[i].second.size(); j++)
					{
						cout<<sums[i].second[j]<<" ";
					}
					cout<<endl;
				}
				
				for(long long int j = 0; j < sums[k].second.size(); j++)
				{
					cout<<sums[k].second[j]<<" ";
				}
				cout<<endl;
				
				count++;
				found = true;
			}
		}
	}
	
	if(!found)
		cout<<"Impossible"<<endl;
}


int main()
{
	long long int n;
	cin>>n;
	
	long long int c = 1;
	while(n --> 0)
	{
		doCase(c);
		c++;
	}

	return 0;
}
