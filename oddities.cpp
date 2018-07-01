#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	
	while(n --> 0)
	{
		int t;
		cin>>t;
		cout<<t<<" is ";
		if(t % 2 == 0)
			cout<<"even"<<endl;
		else
			cout<<"odd"<<endl;
	}
	
	return 0;
}
