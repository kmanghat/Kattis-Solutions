#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int in;
	vector<int>heights;
	int h1,h2;
	bool sol =false;

	for(int i = 0;i < 6;i++)
	{
		cin>>in;
		heights.push_back(in);
	}
	
	cin>>h1;
	cin>>h2;
	int counter =0 ;
	sort(heights.begin(),heights.end());
	do{
	
			
		if(h1 == heights[0] + heights[1] + heights[2]
		&& h2 == heights[3] + heights[4] + heights[5] )
		{
			sort(heights.rbegin(),heights.rbegin()+3);
			sort(heights.rbegin()+3,heights.rend());
			for(int x: heights)
			{
				cout<< x <<" ";
			}
			sol = true;
		}
	
		
	
	}while(next_permutation(heights.begin(),heights.end()) && sol == false);
	cout<<endl;
	
	
	return 0;	
}
