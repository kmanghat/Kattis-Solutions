#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll findPos(string str, char a)
{
	for(ll i = 0 ; i < str.size(); i++)
	{
		if(str[i] == a)
			return i;
	}
	
	return 0;
}

int main()
{
	ll n;
	
	while(cin>>n && n!=0)
	{
		string s,p,m;
		string ans = "";
		
		cin>>s>>p>>m;
		
		int size = m.size();
		ll temp = pow(size,1.5);
		temp += 102;
		ll d = temp % 6;
		cout<<d<<endl;
		for(int i = 0; i < m.size(); i++)
		{
			if(i == d)
			{
				ll posP = findPos(p,m[i]);
				ans += s[posP];	
			}
			
			else
			{
				ll posP = findPos(p,m[i]);
				ll posS;
				if(i == m.size() - 1)
				{
					posS = findPos(s,m[0]);
				}
				else
				{
					posS = findPos(s,m[i+1]);
				}
			
				ll loc = (posP ^ posS);
			
				cout<<m[i]<<" "<<m[i+1]<<" "<<posP<<" "<<posS<<" "<<loc<<endl;
				ans += s[loc];
			}
			
		}
		
		cout<<ans<<endl;
	
	
	}	


	return 0;
}
