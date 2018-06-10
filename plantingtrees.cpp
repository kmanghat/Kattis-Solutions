#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	
	vector<int> days;
	int in;
	for(int i = 0; i< n; i++)
	{
		cin>>in;
		days.push_back(in);
	}
	
	sort(days.begin(),days.end());
	reverse(days.begin(),days.end());
	
	int maxdays = 0;
	for(int i = 0; i < n; i++)
	{
		if(i+days[i]+2 > maxdays)
			maxdays = i+days[i]+2;
	}
	
	cout<<maxdays<<endl;

	return 0;
}
