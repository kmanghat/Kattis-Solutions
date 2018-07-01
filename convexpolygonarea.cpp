#include <bits/stdc++.h>

using namespace std;

int main()
{
	int cases;
	cin>>cases;
	
	while(cases --> 0)
	{
		int points;
		cin>>points;
		vector<pair<int,int>> pts;
		
		for(int i = 0; i < points; i++)
		{
			int x ,y;
			cin>>x>>y;
			
			pts.push_back(make_pair(x,y));
		}
		
		int sum1,sum2;
		sum1 = 0;
		sum2 = 0;
		for(int i = 0; i < pts.size()-1; i++)
		{
			sum1 += pts[i].first*pts[i+1].second;
			sum2 += pts[i].second*pts[i+1].first;
		}
		
		sum1 += pts[pts.size()-1].first*pts[0].second;
		sum2 += pts[pts.size()-1].second*pts[0].first;
		
		double numerator = abs(sum1-sum2);
		double ans = numerator/2.0;
		cout<<ans<<endl;
	}
	
	return 0;
}
