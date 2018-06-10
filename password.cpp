#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n;
	cin>>n;
	int ncpy = n;
	string in;
	double prob;
	vector<double> p;
	while(ncpy --> 0)
	{
		cin>>in>>prob;
		p.push_back(prob);	
	}
	
	sort(p.begin(), p.end());
	double ans = 0;
	reverse(p.begin(),p.end());
	
	for(int i = n-1; i >= 0; i--)
	{
		ans += (i+1)*p[i];
	}
	
	cout<<setprecision(4)<<fixed;
	cout<<ans<<endl;


	return 0;
}
