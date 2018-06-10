#include <bits/stdc++.h>

using namespace std;

int main()
{
	unsigned int n;
	cin>>n;
	
	while(n --> 0)
	{	
		unsigned int m;
		cin>>m;
		unsigned int count  = 0;
		
		vector<int>split;
		
		for(long long int i = 1000000000; i >= 1; i /= 10)
		{
			split.push_back(m / i);
		}
		
		int ans = 0;
		for(int i = 0; i < split.size(); i++)
		{
			int count = 0;
			while(split[i])
			{
				if((split[i]&1) == 1)
					count++;
				
				split[i] = split[i]>>1;
				
			}
			
			if(count > ans)
				ans = count;
		}
		cout<<ans<<endl;
	
	}	
	
	return 0;
}
