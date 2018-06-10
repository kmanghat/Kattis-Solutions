#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	ll n;
	while(cin >> n)
	{
		vector<ll> factors;
		
		ll sum = 0;
		for(ll i = 1 ; i <= sqrt(n); i++)
		{
			if(n%i == 0)
			{
				sum += i;
				
				if(n/i != i && n/i != n)
				{
					sum += (n/i);
				}
			}
		}
		
		cout<<n;
		if(sum == n)
			cout<<" perfect";
			
		else if(abs(sum - n) <= 2)
			cout<<" almost perfect";
		else
			cout<<" not perfect";
		cout<<endl;
		
	
	
	}

	return 0;
}
