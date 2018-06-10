#include <bits/stdc++.h>

using namespace std;

double avg(vector<double> temp)
{
	double sum = 0;
	for(int i = 0; i < temp.size(); i++)
	{
		sum += temp[i];
	}
	
	return (sum / temp.size());
}
void doCase()
{
	int cs,ec;
	cin>>cs>>ec;
	
	vector<double> c,e;
	int t;
	for(int i = 0; i < cs;i++)
	{
		cin>>t;
		c.push_back(t);
	}
	
	for(int j = 0; j < ec; j++)
	{
		cin>>t;
		e.push_back(t);
	}
	
	int ans = 0;
	
	double ea = avg(e);
	double ca = avg(c);
	
	for(int i = 0; i < c.size(); i++)
	{
		if(c[i] < ca && c[i] > ea)
			ans++;
	}
	
	cout<<ans<<endl;
}

int main()
{
	int cases;
	cin>>cases;
	
	while(cases --> 0)
	{
		doCase();
	}


	return 0;
}
