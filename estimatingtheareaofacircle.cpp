#include <bits/stdc++.h>

using namespace std;
typedef long double ld;

int main()
{
	ld r,m,c;
	
	while(cin>>r && cin>>m && cin>>c && ( r != 0 || m != 0 || c != 0))
	{
		cout<<setprecision(5)<<fixed;
		cout<<M_PI*pow(r,2)<<" "<<(c/m)*pow(r*2,2)<<endl;
	}


	return 0;
}
