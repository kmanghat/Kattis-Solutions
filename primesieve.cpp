#include <bits/stdc++.h>

using namespace std;

vector<bool>prime;
int sieve(int num)
{
	int count = 0;
	for(int p = 2; p <= sqrt(num); p++)
	{
		if(prime[p] == true)
		{
			for(int i = p*2; i <= num; i += p)
			{
				prime[i] = false;
			}
		}
	}
	
	for(int i = 2; i <= num; i++)
	{
		if(prime[i])
			count++;
	}
	return count;
}
int main()
{
	int n,q;
	cin>>n>>q;
	
	prime.resize(n+1,true);
	int primes = sieve(n);	
	cout<<primes<<endl;
	prime[1] = false;
	while(q --> 0)
	{
		int query;
		cin>>query;
		cout<<prime[query]<<endl;
	}
	
	return 0;
}
