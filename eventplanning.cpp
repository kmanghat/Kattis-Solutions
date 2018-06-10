#include <bits/stdc++.h>

using namespace std;

int main()
{
	int p,b,h,w;
	cin>>p>>b>>h>>w;
	
	vector <int> temp;
	vector<int> cost;
	int t,c;
	for(int i = 0; i < h; i++)
	{
		cin>>c;
		
		for(int j = 0; j < w; j++)
		{
			cin>>t;
			
			if(t >= p && c*p <= b)
				cost.push_back(c*p);
				
		}
	}
	
	sort(cost.begin(),cost.end());
	
	if(!cost.empty())
		cout<<cost[0]<<endl;
	
	else
		cout<<"stay home"<<endl;
		
	
	return 0;
}
