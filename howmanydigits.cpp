#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef long double ld;

int main()
{
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll n;
	
	while(cin>>n)
	{
		ld sum = 0;
		
		sum = ((n * log10(n / M_E) + 
                 log10(2 * M_PI * n) /
                 2.0));
        if( n < 2)
        	sum = 0;
		
		cout<<fixed<<setprecision(0);
		cout<<floor(sum) + 1<<endl;	
	}
				
	return 0;
}
