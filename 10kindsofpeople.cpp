#include <iostream>

using namespace std;
int row,col;
char region = '2';
char decimal;

bool isSafe(char grid[][1005], char visited[][1005], int x, int y)
{
	if((x < row) && (x >= 0) && (y < col) && (y >= 0) && 
		(grid[x][y] == '1' && visited[x][y] == '0'))
	{
		return true;
	}
	
	else
		return false;			

}

bool isSafeAlternate(char grid[][1005], char visited[][1005], int x, int y)
{
	if((x < row) && (x >= 0) && (y < col) && (y >= 0) && 
		(grid[x][y] == '0' && visited[x][y] == '0'))
	{
		return true;
	}
	
	else
		return false;
}

void DFS(char grid[][1005], char visited[][1005], int x, int y, int num)
{
	int numRow[] = {-1,1,0,0};
	int numCol[] = {0,0,1,-1};
	
	visited[x][y] = region;
		
	
	for(int i = 0; i < 4; i++)
	{
		if(num == 0)
		{
			if(isSafe(grid,visited, x+numRow[i], y+numCol[i]))
				DFS(grid,visited, x+numRow[i], y+numCol[i],num);
		}
		else
		{
			if(isSafeAlternate(visited,grid, x+numRow[i], y+numCol[i]))
				DFS(grid,visited, x+numRow[i], y+numCol[i],num);
		}
	}


}

int main()
{
	char grid[1005][1005];
	char visited[1005][1005];
	
	cin>>row>>col;
	
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			visited[i][j] = '0';
		}
	}
	
	for(int i = 0; i < row; i++)
	{
		cin>>grid[i];
	}
	
	for(int x = 0; x < row; x++)
	{
		for(int y = 0; y < col; y++)
		{
			if(visited[x][y] == '0' && grid[x][y] == '1')
			{
				DFS(grid,visited,x,y,0);
				region++;
			}
		}
	}
	
	decimal = region-1;
	
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			grid[i][j] = '0';
		}
	}
	
	for(int x = 0; x < row; x++)
	{
		for(int y = 0; y < col; y++)
		{
			if(grid[x][y] == '0' && visited[x][y] == '0')
			{
				DFS(visited,grid,x,y,1);
				region++;
			}
		}
	}
	
	
	int queries;
	cin>>queries;
	
	for(int i = 0;i < queries; i++)
	{
		int r1,c1,r2,c2;
		cin>>r1>>c1>>r2>>c2;
		
		r1--;c1--;r2--;c2--;
		
		if(visited[r1][c1] == visited[r2][c2] && visited[r1][c1] != '0')
		{
			cout<<"decimal"<<endl;
		}
		
		else if(grid[r1][c1] == grid[r2][c2] && grid[r1][c1] != '0')
		{
			cout<<"binary"<<endl;
		}
		else
		{
			cout<<"neither"<<endl;
		}	
	}

		
	
	return 0;
}
