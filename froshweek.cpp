#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define MAXN 1000005
ll arr[MAXN];
ll arrc[MAXN];
ll bit[MAXN];

ll getSum(ll idx)
{
	ll sum = 0;
	for(ll i = idx; i > 0; i -= i&-i)
	{
		sum += bit[i];
	}
	
	return sum;
}

void update(ll idx, ll val)
{
	for(ll i = idx; i < MAXN; i += i &-i)
	{
		bit[i] += val;
	}
}

int main()
{
	ll n;
	cin>>n;
	for(ll i = 1; i <= n;i++)
	{
		cin>>arr[i];
		arrc[i] = arr[i];
	}
	
	sort(arrc + 1, arrc + n+1);
	for(ll i = 1; i <= n; i++)
	{
		ll ind = ll(lower_bound(arrc, arrc + n, arr[i])-arrc);
  	 	arr[i] = ind;
	} 
	ll ans = 0;
	memset(bit,0,sizeof(bit));
	
	ll x = 0;
	for(ll i = n; i > 0; i--)
	{
		x = getSum(arr[i]-1);
		ans += x;
		update(arr[i],1);	
	}
	cout<<ans<<endl;

	return 0;
}
