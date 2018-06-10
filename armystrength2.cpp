#include <bits/stdc++.h>

using namespace std;

void doCase()
{
	long long int m,g;
	cin>>g>>m;
	
	long long int n,maxmg,maxgo;
	for(long long int i = 0; i < g; i++)
	{
		cin>>n;
		if( i == 0)
			maxgo = n;
			
		if(maxgo < n)
			maxgo = n;
		
	}
	
	for(long long int  i = 0; i < m; i++)
	{
		cin>>n;
		
		if(i == 0)
			maxmg = n;
		if(maxmg < n)
			maxmg = n;
	}
	
	if(maxmg > maxgo)
	{
		printf("MechaGodzilla\n");
	}
	else
	{
		printf("Godzilla\n");
	}
}
int main()
{
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	long long int cases;
	cin>>cases;
	while(cases -->0)
	{
		doCase();
	}
	return 0;
}
