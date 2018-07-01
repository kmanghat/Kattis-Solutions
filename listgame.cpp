#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


int main()
{
	ll x;
	cin>>x;
	
	ll ans = 0;
	
	ll checkTill = sqrt(x);
	
	
	for(ll i = 2; i <= sqrt(x); i++)
	{
		while(x%i == 0)
		{
			x = x/i;
			ans++;
		}
	}
	
	if(x > 2)
		ans++;
		
	cout<<ans<<endl;

	return 0;	
}
