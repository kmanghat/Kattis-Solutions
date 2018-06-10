#include <bits/stdc++.h>

using namespace std;

int main()
{
	int r = 1001;
	int m = 500;
	int l = 1;
	cout<<m<<endl;
	
	string in;
	
	while(cin>>in && in != "correct")
	{
		
		if(in == "lower")
		{
			r = m;
			m = (l+m)/2;
		}
		
		else
		{
			 l = m;
			 m = (r+m)/2;
		
		}
		
		cout<<m<<endl;
	}
	return 0;
}
