#include <bits/stdc++.h>

using namespace std;

int manhattanDist(int num ,int currRow,int currCol)
{
	int finalRow = num/4;
	int finalCol = num%4;
	
	int distance  = abs(finalRow - currRow) + abs(finalCol - currCol);	
	
	return distance;
}
int main()
{
	char in[4][4];
	int dist = 0;
	for(int  i = 0 ; i < 4; i++)
	{
		for(int j = 0 ; j < 4; j++)
		{
			cin>>in[i][j];
			if(in[i][j] != '.')
				dist += manhattanDist(in[i][j]-'A',i,j);
		}
	}
	
	cout<<dist<<endl;

	return 0;
}
