#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool isPrime(ll num)
{
	for(ll i = 2; i <= sqrt(num); i++)
	{
		if(num % i == 0)
			return false;
	}
	
	return true;
}

int main()
{
	ll n;
	
	cin>>n;
	
	while(n --> 0)
	{
		ll even;
		cin>>even;
		
		vector<ll> holder;
		
		for(ll i = 2; i <= even/2; i++)	
		{
			ll num = i;
			ll complement = even - i;
			
			if(isPrime(num) && isPrime(complement))
			{
				holder.push_back(num);
			}
		}
		
		cout<<even<<" has "<<holder.size()<<" representation(s)"<<endl;
		for(ll i = 0 ; i < holder.size() ; i++)
		{
			cout<<holder[i]<<"+"<<even-holder[i]<<endl;
		}
		
		cout<<"\n";
	
	
	}

	return 0;
}
