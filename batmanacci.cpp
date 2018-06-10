#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

unsigned long long fib[100100];

string generateSequence(ll len,ll k)
{
	if(len == 1)
		return "N";
	
	else if(len == 2)
		return "A";

	else
	{
		ll l = fib[len-2];
		cout<<l<<endl;
		if(k <= l)
			return generateSequence(len-2, k);
		else
			return generateSequence(len-1, k-l);
	}
}
 
int main()
{
	fib[1] = 1;
	fib[2] = 1;
	
	for(int  i = 3; i < 100100; i++)
	{
		fib[i] = fib[i-1] + fib[i-2];
		if (fib[i] > 1000000000000000000)
            fib[i] = 1000000000000000001;
	}
	ll k;
	ll n;
	cin>>n>>k;
	string ans = "";
	ans = generateSequence(n,k);	
	
	cout<<ans<<endl;
	return 0;
}
