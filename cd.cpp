#include<bits/stdc++.h>

using namespace std;

int main()
{


	long long int jack,jill;
	
	while(cin>> jack && cin >> jill &&(jack != 0 || jill != 0))
	{
		set<long long int> records;
		long long int r;
		long long int count = 0;

		for(int i = 0; i < jack; i++)
		{
			cin>>r;
			records.insert(r);	
		}
		long long int j;
		for(int k = 0; k < jill; k++)
		{
			cin>>j;
			
			if(j <= r)
			{
				if(records.find(j) != records.end())
				{
					count++;
				}
			}
		}
		
		cout<<count<<endl;
	
	}
	
	return 0;
}
