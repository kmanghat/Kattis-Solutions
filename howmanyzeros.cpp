#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
		
int main()
{
	ll m,n;
	
	while(cin>>m>>n && m!=-1 && n!=-1)
	{
		ll ans = 0;
		for(ll i = m; i <= n; i++)
		{
			string curr = to_string(i);
			for(ll j = 0; j < curr.size(); j++)
			{
				if(curr[j] == '0')
					ans++;
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}
