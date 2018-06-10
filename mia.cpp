#include <bits/stdc++.h>

using namespace std;

int main()
{
	int p1,p2,p3,p4;
	
	while(cin>>p1 && cin >>p2 && cin>> p3 && cin>> p4 && p1!=0)
	{
		int h1,h2;
		if(p1 > p2)
		{
			h1 = p1; 
			h2 = p2;
		}
		else
		{
			h1 = p2;
			h2 = p1;
		}
			
		int h3,h4;
		
		if(p3> p4)
		{
			h3 = p3;
			h4 = p4;
		}
			
		else
		{
			h3 = p4;
			h4 = p3;
		}
		
		 int r1 = 0;
		 int r2 = 0;
		 
		 if(h1 == 2 && h2 == 1)
		 	r1 = 3;
		 
		 else if(h1 == h2)
		 	r1 = 2;
		 
		 if(h3 == 2 && h4 == 1)
		 	r2 = 3;
		 
		 else if(h3 == h4)
		 	r2 = 2;
		 
		 if( r1 > r2)
		 	cout<<"Player 1 wins.";
		 
		 else if(r2 > r1)
		 	cout<<"Player 2 wins.";
		 	
		 else
		 {
		 	if(h1 > h3)
		 		cout<<"Player 1 wins.";
		 	
		 	else if(h3 > h1)
		 		cout<<"Player 2 wins.";
		 	
		 	else
		 	{
		 		if(h2>h4)
		 			cout<<"Player 1 wins.";
		 		
		 		else if(h4 > h2)
		 			cout<<"Player 2 wins.";
		 		
		 		else
		 			cout<<"Tie.";
		 	}
		}
		 	cout<<endl;
		 			
		 
	
	}
	
	
	return 0;
}
