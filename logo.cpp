#include <bits/stdc++.h>

using namespace std;

double PI = M_PI;

int main()
{
	int cases;
	cin >> cases;
	
	while( cases --> 0)
	{
		int commands;
		cin >> commands;
		
		double currAngle = 0;
		double currX = 0;
		double currY = 0;

		while(commands --> 0)
		{
			string c;
			int dist;
			cin >> c >> dist;
			
			if( c == "fd")
			{
				currX += dist * sin(currAngle * (PI/180));
				currY += dist * cos(currAngle * (PI/180));
				
			}
			
			if( c == "bk")
			{
				currX -= dist*sin(currAngle*(PI/180));
				currY -= dist*cos(currAngle*(PI/180));
			}
			
			if( c == "lt")
			{
				currAngle += dist;
			}
			
			if ( c == "rt")
			{
				currAngle -= dist;
			}
		}
		
		double ans = pow(currX,2) + pow(currY,2);
		ans = sqrt(ans);
		cout<<int(round(ans))<<endl;
	}
	return 0;
}
