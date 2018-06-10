#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int max_width;
	int width,height;
	int total_width,total_height;
	int temp;
	
	cin>>max_width;
	
	total_width = 0;
	total_height = 0;
	
	// run till -1 is entered
	while(cin>>width && width != -1)
	{
		cin>>height;
		
		if(height > width)
		{
			temp = height;
			height = width;
			width = temp;
		}
		
		
		
		
		
			
	}
	



	
	return 0;
}


