#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void doCase()
{
	ll caseNum;
	cin>>caseNum;
	
	vector<ll>dataSet;
	
	ll t;
	for(ll i = 0; i < 12; i++)
	{
		cin>>t;
		dataSet.push_back(t);
	}
	
	
	ll ans = 0;
	
	for(ll i = 0; i < 11; i++)
	{
		bool found = false;
		bool okay = true;
		
		if(dataSet[i] < dataSet[i+1])
		{
			for(int j = i+1; j < 11 && !found; j++)
			{
				if(dataSet[j] > dataSet[j+1] && dataSet[j+1] > dataSet[i+1])
				{
					ans++;
					cout<<dataSet[i+1]<<" "<<dataSet[j]<<endl;
				}
				if(dataSet[j+1] <= dataSet[i])
				{
					ans++;
					found = true;
					cout<<dataSet[i+1]<<" "<<dataSet[j]<<endl;
				}
			}
				
		}
	}
	

	cout<<caseNum<<" "<<ans<<endl;
}

int main()
{
	ll cases;
	cin>>cases;
	
	while(cases-->0)
	{
		doCase();
	}
	return 0;
}	
