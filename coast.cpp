#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll row,col;

//check if curr row col is within boundaries and if cell not visited.
//Also make sure the curr spot is somewhere you want to step on ie '0' or '1'
bool isSafe(char grid[][2000], char visited[][2000],int x, int y)
{
	if((x >= 0) && (x < row) && (y >= 0) && (y < col) &&
	   (grid[x][y] == '0' && visited[x][y] == '0'))
	{
		return true;
	}
	
	else
		return false;
}

void DFS(char grid[][2000], char visited[][2000], int x, int y)
{
	//up down left right
	int rowNum[] = {-1,1,0,0};
	int colNum[] = {0,0,1,-1};
	
	visited[x][y] = '2';
	
	for(int k = 0; k < 4; k++)
	{
		//curr location + a direction is passed in
		if(isSafe(grid,visited, x + rowNum[k], y + colNum[k]))
			DFS(grid,visited,x + rowNum[k], y + colNum[k]);
			
	}
}

int countCost(int x, int y, char visited[][2000])
{
	int rowNum[] = {-1,1,0,0};
	int colNum[] = {0,0,1,-1};
	
	int count = 0;
	for(int k =0 ;k < 4; k++)
	{
		if(visited[x+rowNum[k]][y+colNum[k]] == '0')
		{
			count++;
		}
	}
	
	return count;
}

int main()
{
	char grid[2000][2000];
	char visited[2000][2000];
	ll n, m;
	cin>>n>>m;
	
	row = n+2;
	col = m + 2;
	
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			visited[i][j] = '0';
		}
	}
	
	for(ll i = 0; i < col; i++)
	{
		grid[0][i] = '0';
	}
	
	for(ll i = 1; i <= n; i++)
	{
		grid[i][0] = '0';
		
		char temp[2000];
		cin>>temp;
		strcat(grid[i],temp);
		strcat(grid[i],"0");
	}
	
	
	for(ll i = 0; i < col; i++)
	{
		grid[row-1][i] = '0';
	}

	DFS(grid,visited, 0,0);
	
	int ans = 0;
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			if(visited[i][j] == '2')
			{
				ans+= countCost(i, j, visited);
			}	
		}
	}
	
	cout<<ans<<endl;
	
	return 0;
}
