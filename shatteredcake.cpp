#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll area(ll w, ll l)
{
	return w*l;
}

int main()
{
	ll n,width,w,l;
	
	cin>>width>>n;
	ll totalArea = 0;
	for(ll i = 0 ; i < n; i++)
	{
		cin>>w>>l;
		totalArea += area(w,l);
	}
	
	cout<<totalArea/width<<endl;

	return 0;
}
