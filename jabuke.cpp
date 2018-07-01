#include <bits/stdc++.h>

using namespace std;

double area(double xa,double xb,double xc,double ya,double yb,double yc)
{
	double numerator = abs(xa*(yb-yc)+xb*(yc-ya) + xc*(ya-yb));
	return numerator/2.0;
}

int main()
{
	double xa,xb,xc,ya,yb,yc;
	double cases;
	
	cin>>xa>>ya;
	cin>>xb>>yb;
	cin>>xc>>yc;
	
	double areaOfTriangle = area(xa,xb,xc,ya,yb,yc);
	cout<<setprecision(1)<<fixed;
	cout<<areaOfTriangle<<endl;
	
	cin>>cases;
	int ans = 0;
	while(cases --> 0)
	{
		double xp,yp;
		cin>>xp>>yp;
		
		double a1 = area(xp,xb,xc,yp,yb,yc);
		double a2 = area(xa,xp,xc,ya,yp,yc);
		double a3 = area(xa,xb,xp,ya,yb,yp);
		
		if(areaOfTriangle == a1+a2+a3)
		{
			ans++;
		}
	}
	cout<<ans<<endl;
	
	
	
	return 0;
}
