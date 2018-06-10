#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	ll n,m;
	
	while(cin>>n && cin>>m &&(n!= 0 || m!=0))
	{
		cout<<n/m<<" "<<n%m<<" / "<<m<<endl;
	}
			

	return 0;
}
