#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool isPrime(ll n)
{
	for(int i = 2; i < n/2; i++)
	{
		if(n % i == 0)
			return false;
	}
	
	return true;
}

void doCase()
{
	ll n1,n2;
	cin>>n1>>n2;
	
	ll n2cpy =n2;
	set<ll>series;
	
	bool end = false;
	bool found = false;
	
	bool prime = isPrime(n2);
	
	if(!prime || n2 == 1)
		end = true;
	
	ll sum = 0;
	for(ll i = 0; !end && !found; i++)
	{
		end = false;
		found = false;
		vector<ll>digits;
		for(ll j = 10; n2 != 0; j*=10)
		{
			int f = j/10;
			digits.push_back((n2%j)/f);
			n2 -= n2%j;
		}
		
		sum = 0;
		for(ll k = 0 ; k < digits.size(); k++)
		{
			sum += pow(digits[k],2);
		}
		
		n2 = sum;
		//cout<<sum<<endl;
		if(sum == 1)
			found = true;
		
		if(series.count(sum) != 0)
			end = true;
		
		series.insert(sum);
	}
	
	cout<<n1<<" "<<n2cpy;
	if(found)
		cout<<" YES";
		
	else
		cout<<" NO";
	
	cout<<endl;
	
}
int main()
{
	int cases;
	cin>>cases;
	
	
	while(cases-->0)
		doCase();
	
	return 0;
}
