#include <bits/stdc++.h>

using namespace std;

int main()
{
	char board[8][8];
	int qCount = 0;
	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			cin>>board[i][j];	
			
			if(board[i][j] == '*')
			{
				qCount++;
			}	
		}
	}
	
	
	
	int rowAcross = 0;
	int rowDown = 0;
	bool isValid = true;
	
	if(qCount != 8)
		isValid = false;
		
	for(int i = 0; i < 8 && isValid; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			if(board[i][j] == '*')
				rowAcross++;
		}
		
		if(rowAcross > 1)
			isValid = false;
		
		rowAcross = 0;
	}
	
	for(int i = 0; i < 8 && isValid; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			if(board[j][i] == '*')
				rowDown++;
		}
		
		if(rowDown > 1)
			isValid = false;
		
		rowDown = 0;
	}
	
	int x,y,counter;
	for(int i = 0; i < 8 && isValid; i++)
	{
		x = 0; y = i; counter = 0;
		while( x < 8 && y < 8)
		{
			if(board[x][y] == '*')
				counter++;
			
			if(counter > 1)
				isValid = false;
				
			x++;y++;
		}
		
		counter = 0; x = 0; y = i;
        while (x < 8 && y >= 0)
        {
            if(board[x][y] == '*')
				counter++;
			
			if(counter > 1)
				isValid = false;
				
            x++; y--;
        }
        counter = 0; x = 7; y = i;
        while (x >= 0 && y >= 0)
        {
           if(board[x][y] == '*')
				counter++;
			
			if(counter > 1)
				isValid = false;
				
            x--; y--;
        }
        counter = 0; x = 7; y = i;
        while (x >= 0 && y < 8)
        {
       		if(board[x][y] == '*')
				counter++;
			
			if(counter > 1)
				isValid = false;
				
            x--; y++;
        }
		
	}
	
	if(!isValid)
		cout<<"invalid"<<endl;
	
	else
		cout<<"valid"<<endl;

	return 0;
}
