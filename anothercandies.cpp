#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void doCase()
{
	ll n;
	cin>>n;
	
	ll ncpy = n;
	ll total = 0;
	while(ncpy --> 0)
	{
		ll temp;
		cin>>temp;
		
		total += temp%n;
	}
	
	if(total % n == 0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}

int main()
{
	ll cases;
	
	cin>>cases;
	
	while(cases --> 0)
		doCase();

	return 0;
}
