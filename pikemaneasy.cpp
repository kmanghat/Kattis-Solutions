#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	ll n,t;
	ll a,b,c,t0;
	
	cin>>n>>t;
	cin>>a>>b>>c>>t0;
	
	vector<ll> time;
	
	time.push_back(t0);
	ll temp = 0;
	for(ll i = 1; i < n; i++)
	{
		temp = ((a*time[i-1]+b)%c)+1;
		time.push_back(temp);
	}
	
	sort(time.begin(),time.end());

	cout<<endl;
	ll penalty = 0;
	ll solved = 0;
	temp = 0;
	vector<ll> penaltyHolder;
	for(solved = 0; penalty+time[solved] <= t && solved < n;solved++)
	{
		penalty += time[solved];
		penaltyHolder.push_back(penalty);
	}
	
	ll totalPenalty = 0;
	for(ll i = 0; i < penaltyHolder.size(); i++)
	{
		totalPenalty += penaltyHolder[i];
		
	}
	cout<<solved<<" "<<totalPenalty%1000000007<<endl;
	

	return 0;
}
