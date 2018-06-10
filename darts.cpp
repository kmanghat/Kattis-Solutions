#include <bits/stdc++.h>

using namespace std;

float calcDistance(float x, float y)
{
	return sqrt(pow(x,2) + pow(y,2));	
}

int main()
{
	int cases;
	cin>>cases;
	
	for(int i = 0; i < cases; i++)
	{
		int throws;
		cin>>throws;
		float x,y;
		int points = 0;
		for(int j = 0; j < throws; j++)
		{	
			cin>>x>>y;
			float dist = calcDistance(x,y);
			
			if(dist <= 20)
				points += 10;
			
			else if( dist <= 40)
				points += 9;
				
			else if( dist <= 60)
				points += 8;
			
			else if( dist <= 80)
				points += 7;
			
			else if( dist <= 100)
				points += 6;
				
			else if( dist <= 120)
				points += 5;
				
			else if( dist <= 140)
				points += 4;
				
			else if( dist <= 160)
				points += 3;
				
			else if( dist <= 180)
				points += 2;
				
			else if( dist <= 200)
				points += 1;
				
			else
				points += 0;
		
		}
		
		cout<<points<<endl;
	}
	return 0;
}
