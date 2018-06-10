#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x,n;
	cin>>x>>n;
	
	int sum = 0;
	int a;
	for(int i = 0; i < n; i++)
	{
		cin>>a;
		sum+=a;
	}
	
	int leftOver = (n*x) - sum;
	
	cout<<leftOver + x<<endl;
	
	return 0;
}
