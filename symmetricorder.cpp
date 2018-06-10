#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	ll n;
	
	ll count = 1;
	while(cin>>n && n != 0)
	{
		vector<string> names;
		names.resize(n);
	
		string temp;
		ll front = 0;
		ll back = n-1;
		for(ll i = 0; i < n; i++)
		{
			cin>>temp;
			
			if( i % 2 == 0)
			{
				names[front] = temp;
				front++;
			}
			
			else
			{
				names[back] = temp;
				back--;
			}
			
		}
		
		cout<<"SET "<<count<<endl;
		
		for(ll j = 0; j < names.size(); j++)
		{
			cout<<names[j]<<endl;
		}
	
		count++;
	}

	return 0;
}
