#include <bits/stdc++.h>

using namespace std;

double convertToRadians(double d)
{
    return d*(M_PI/180);
}

int main()
{
    int cases;
    cin>>cases;
    
    while(cases --> 0)
    {
        int moves;
        cin>>moves;
        
        double currAngle = 0;
        double currx = 0;
        double curry = 0;
        while(moves --> 0)
        {
            double angle,distance;
            cin>>angle>>distance;
            angle = convertToRadians(angle);
            currAngle += angle;
            
            angle = convertToRadians(currAngle);
            curry += distance*cos(currAngle);
            currx += distance*sin(currAngle);
        }
        
        cout<<setprecision(3)<<fixed;
        cout<<-currx<<" "<<curry<<endl;
    }
    return 0;
}

