#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	
	cin>>n;
	assert(n>=1 && n<=10000);
	
	int i;
	
	for(i = 0; n!=1 ;i++)
	{
		n = ceil(double(n/2.0));
	}
	
	i++;
	cout<<i<<endl;
	
	return 0;
}
