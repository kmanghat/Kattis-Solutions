#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	int xt,yt;
	while(cin>>n  && n != 0)
	{
		vector<int> x;
		vector<int> y;
		bool cw = false;
		
		for(int i = 0; i < n; i++)
		{
			cin>>xt>>yt;
			x.push_back(xt);
			y.push_back(yt);
		}
		
		int sum = 0;
		int t = 0;
	
		
		int firstp = 0;
		int p;
		int p2;
		int secondp = 0;
		for(int  i = 0; i < x.size()-1; i++)
		{
			p = x[i] * y[i+1];	
			firstp += p;
			p2 = y[i] * x[i+1];
			secondp += p2;
			
			t = (x[i]+x[i+1])*(y[i]-y[i+1]);
			sum += t;
		}
		
		p = x[x.size()-1] * y[0];
		firstp += p;
		
		p2 = y[y.size()-1] * x[0];
		secondp += p2;
		
		t = (x[x.size()-1]+x[0])*(y[y.size()-1]-y[0]);
		sum += t;
			
		double area = double(secondp - firstp)/2;
		
		if(sum < 0)
			cw = false;
		else
			cw = true;
		
		
		if(cw)
			cout<<"CW ";
		else
			cout<<"CCW ";
			
		cout<<setprecision(1)<<fixed<<abs(area)<<endl;
		
	
	}

	return 0;
}
