#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	ll n;
	cin>>n;
	
	//This can be used for numbers greater than 50 because it converges to this value
	long double ans = 0.367879441171442;
	
	if(n < 50)
	{
		ll factorial = 1;
		ll i;
		
		ans = 1;
		for(i = 1; i <= n; i++)
		{
			//generate factorial
			factorial = i*factorial;
			
			if(i%2 == 0)
				ans += 1.0/factorial;
			
			else
				ans -= 1.0/factorial;
		}
	}
	
	cout<<fixed<<setprecision(6)<<(1-ans)<<endl;
	return 0;
}

