#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	int num;
	
	cin>>n;
	
	while(n != -1)
	{
		int** matrix = new int*[n];
		bool *is_triangle = new bool[n];	
	
		for(int i=0; i<n; i++)
		{
			matrix[i] = new int[n];	
			is_triangle[i] = false;
		}
	
		for(int i=0 ; i<n ;i++)
		{
			for(int j = 0; j<n; j++)
			{
				cin>>matrix[i][j];
			}	
		}
	
		for(int i = 0;i<n ;i++)
		{
			for(int j = 0; j<n; j++)
			{
				if(matrix[i][j] == 1)
				{				
					for(int k = 0; k<n; k++)
					{
						if(matrix[i][k] == 1 && matrix[j][k] == 1)
						{
							is_triangle[i] = true;
							is_triangle[j] = true;
							is_triangle[k] = true;
						
						}					
					}
				}
			}
		}
	
		for(int i = 0; i<n; i++)
		{
			if(is_triangle[i] == false)
				cout<<i<<" ";
		}
		cout<<endl;
		
		cin>>n;
	}
	return 0;
}
