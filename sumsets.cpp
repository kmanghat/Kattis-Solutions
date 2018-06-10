#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll BitCount(ll u)
{
     ll uCount;

     uCount = u - ((u >> 1) & 033333333333) - ((u >> 2) & 011111111111);
     return ((uCount + (uCount >> 3)) & 030707070707) % 63;
}

int main()
{
	ll n;
	cin>>n;
	
	ll array[5000];
	set<ll> unique;
	for(ll i = 0; i < n; i++)
	{
		cin>>array[i];
		unique.insert(array[i]);
	}
	
	vector<ll> holder;
	for(ll i = 0; i < n-2; i++)
	{
		for(ll j = i+1; j < n-1; j++)
		{
			for(ll k = j+1; k < n; k++)
			{
				ll sum = array[i]+array[j]+array[k];
				holder.push_back(sum);
			}
		}
	}
	//greedy greedy greedy
	sort(holder.rbegin(),holder.rend());
	
	bool found = false;
	ll ans;
	for(ll i = 0; i < holder.size() && !found; i++)
	{
		if(unique.find(holder[i]) != unique.end())
		{
			found = true;
			ans = holder[i];
		}
	}
	
	if(found)
		cout<<ans<<endl;
	
	else
		cout<<"no solution"<<endl;
	return 0;
}
