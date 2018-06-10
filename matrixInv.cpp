#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c,d;
	int det;
	int counter = 1;
	
	while(cin>>a)
	{
		cin>>b>>c>>d;
		det = (a * d) - (c * b);
		
		cout<<"Case "<<counter<<":"<<endl;
		cout<<det * d<<" "<<det * (b * -1)<<endl;
		cout<<det * (c * -1)<<" "<<det*a<<endl;
		cout<<endl;
		counter++;
	}
	
	
	
	
	return 0;
}
