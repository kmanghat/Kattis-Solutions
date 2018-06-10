#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	ll n;
	
	while(cin >> n && n!=-1)
	{
		ll totalDistance = 0;
		ll time = 0;
		ll prevTime = 0;
		ll speed = 0;
		
		for(ll i = 0; i < n; i++)
		{
			cin>>speed>>time;
			ll temp = time;
			time -= prevTime;
			
			prevTime = temp;
			totalDistance += speed * time;
		}
		
		cout<<totalDistance<<" miles"<<endl;
	}
		
	
	
	return 0;
}
