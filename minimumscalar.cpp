#include <bits/stdc++.h>

using namespace std;

struct comp
{
	bool operator()(const int &lhs, const int &rhs)
	{
		return lhs > rhs;
	}
};

void doCase(int count)
{
	long long int n;
	cin>>n;
	long long int t;
	vector<long long int> x,y;
	
	for(int i = 0; i < n; i++)
	{
		cin>>t;
		x.push_back(t);
		 
	}
	
	for(int i = 0; i < n; i++)
	{
		cin>>t;
		y.push_back(t); 
	}
	
	sort(x.begin(), x.end(),comp());
	sort(y.begin(), y.end());
	
	long long int sum = 0;
	for(long long int i =0 ;i < x.size(); i++)
	{
		sum += x[i] * y[i];
	}
	
	cout<<"Case #"<<count<<": ";
	cout<<sum<<endl;

}


int main()
{
	long long int cases;
	cin>>cases;
	
	long long int count = 1;
	while(cases --> 0)
	{
		doCase(count);
		count++;
		
	}

	return 0;
}
