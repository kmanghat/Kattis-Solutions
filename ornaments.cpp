#include <bits/stdc++.h>

using namespace std;

double circle(double r,double h)
{
	double angle = 360 - 2 * acos(r/h) * (180 / M_PI);
    double total = 2 * M_PI * (angle/360) * r;
	return total;
}

double triangle(double b, double h)
{
	return 2.0 * sqrt((pow(h,2) - pow(b,2)));
}

int main()
{
	double r,h,s;
	
	while(cin>>r && cin>>h && cin>>s && (r!=0 || h != 0 || s!=0))
	{
		double a = circle(r,h);
		double b = triangle(r,h);
		
		double ans = a+b;
		//cout<<a<<" "<<" "<<b<<" "<<ans<<endl;
		 ans += ans *(s/100);
		
		cout<<setprecision(2)<<fixed;
		cout<<ans<<endl;
	
	}

	return 0;
}
