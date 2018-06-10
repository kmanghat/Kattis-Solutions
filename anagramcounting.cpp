#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ll;

ll factorial(int num)
{
	ll ans = 1;
	for(int i = 1; i <= num; i++)
	{
		ans *= i;
	}
	
	return ans;
}
 
int main()
{
	string input;
	
	while(cin >> input)
	{
		map<char,int> repeated;
		for(int i = 0; i < input.size(); i++)
		{
			repeated[input[i]]++;
		}
		
		map<char,int>::iterator it;
		
		ll denominator = 1;
		for(it = repeated.begin(); it != repeated.end() ; it++)
		{
			if(it->second != 1)
				denominator *= factorial(it->second);
		}
		
		ll numerator = factorial(input.size());
		cout<<numerator/denominator<<endl;
	}
	
	return 0;
}
