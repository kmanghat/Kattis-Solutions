#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	ll n;
	
	while(cin>>n && n != 0)
	{
		bool infinite = true;
		vector<ll> possible;
		
		ll less = 50000;
		ll greater = 0;
		vector<ll> divisible;
		bool first = false;
		for(ll i = 0 ; i < n; i++)
		{
			string in;
			ll num;
			cin>>in;
			
		
			if(in == "less")
			{
				cin>>in;
				cin>>num;
				
				if(num < less || infinite)
					less = num;
				
				infinite = false;
			}
			
			if(in == "greater")
			{
				cin>>in;
				cin>>num;
				
				if(num > greater || !first)
					greater = num;
					
				first = true;
			}
		
			if(in == "divisible")
			{
				cin>>in;
				cin>>num;
			
				divisible.push_back(num);
			}
		}
			
		//cout<<less<<" "<<greater<<endl;
		
		if(infinite)
			cout<<"infinite"<<endl;
			
		else
		{
			for(ll i = greater+1; i < less; i++)
			{
				bool accept = true;
				
				for(ll j = 0; j < divisible.size(); j++)
				{
					if(i % divisible[j] != 0)
						accept = false;
				}
				
				if(accept)
					possible.push_back(i);
			}
			 
			if(possible.size() == 0)
				cout<<"none"<<endl;
			else
			{
				for(ll i = 0; i < possible.size(); i++)
					cout<<possible[i]<<" ";
				cout<<endl;
			}
		}
	
	}	

	return 0;
}
