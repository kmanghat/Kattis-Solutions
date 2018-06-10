#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int n,m;
	vector <long long int> num;
	long long int count = 1;
	while(cin>>n)
	{
		long long int t;
		for(long long int i = 0; i < n; i++)
		{
			cin>>t;
			num.push_back(t);
		}
		
		cin>>m;
		long long int q;
		vector<long long int> query;
		
		for(long long int i = 0; i < m; i++)
		{
			cin>>q;
			query.push_back(q);
		}
		
		cout<<"Case "<<count<<":"<<endl;
		for(long long int i = 0; i < query.size(); i++)
		{
			
			long long int sum = 0;
			long long int diff = 0;
			long long int temp = 0;
			long long int ans = 0;
			for(long long int j = 0;j < num.size(); j++)
			{
				for(long long int k = 0 ; k < num.size(); k++)
				{
					if(k != j)
					{
						sum = num[k] + num[j];
						temp = sum - query[i];
						
						if(temp < 0)
							temp *= -1;
						
						if( ans == 0)
						{
							ans = sum;
							diff = temp;
						}
						
						if( temp < diff)
						{
							ans = sum;
							diff = temp;
						}
					}
				}
				
			}
			cout<<"Closest sum to ";
			cout<<query[i]<<" is "<<ans<<"."<<endl;
		}
		
		count++;
		num.clear(); query.clear();
	
	}
	return 0;
}
