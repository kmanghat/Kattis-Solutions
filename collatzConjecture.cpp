#include <bits/stdc++.h>

using namespace std;

long long int calculateNext(long long int num)
{
	if(num % 2 == 0)
	{
		return num/2;
	}
	else
		return (3*num)+1;
		
}

int main()
{
	long long int a,b;
	
	while(cin>>a && cin>> b && (a != 0 || b!=0))
	{
		vector<long long int> seriesA, seriesB;
		bool found = false;
		seriesA.push_back(a);
		seriesB.push_back(b);
		long int aPos;
		long int bPos;
		long int ans;
		
		for(long int i = 0; !found; i++)
		{
		
			if(seriesA[seriesA.size() - 1] == seriesB[seriesB.size() - 1])
			{
				found = true;
				aPos = seriesA.size() - 1;
				bPos = seriesB.size() - 1;
				ans = seriesB[seriesB.size() - 1];
			}
			
			if(seriesA[seriesA.size() - 1] != 1)
			{
				seriesA.push_back(calculateNext(a));
				a = calculateNext(a);
			}
		
			if(seriesB[seriesB.size() - 1] != 1)
			{
				seriesB.push_back(calculateNext(b));
				b = calculateNext(b);
			}
			
	
	
			for(long int i = 0; i < seriesA.size() && !found ; i++)
			{
			
				if(seriesA[i] == seriesB[seriesB.size() - 1])
				{
					aPos = i;
					bPos = seriesB.size() - 1;
					ans = seriesA[i];  
					found = true;
				}
			
			}
			
			for(long int j = 0 ; j < seriesB.size() && !found; j++)
			{
				if(seriesB[j] == seriesA[seriesA.size()-1])
				{
					aPos = seriesA.size()-1;
					bPos = j;
					ans = seriesB[j];  
					found = true;
				}
		
		
			}
		}
		
		cout<<seriesA[0]<<" needs "<<aPos<<" steps, "<<seriesB[0]<<" needs "<<bPos<<" steps, they meet at "<<ans<<endl;
		
	}
	
	return 0;
}
