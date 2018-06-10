#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	
	cin>>n>>m;
	
	int diff = abs(n-m);
	
	if(m > n)
	{
		cout<<"Dr. Chaz will have "<<diff;
		
		if(diff == 1)
			cout<<" piece of chicken left over!";
		else
			cout<<" pieces of chicken left over!";
	}
	
	else
	{
		cout<<"Dr. Chaz needs "<<diff;
		
		if(diff == 1)
			cout<<" more piece of chicken!";
		else
			cout<<" more pieces of chicken!";
	}
		
	cout<<endl;
	return 0;
}
