#include <bits/stdc++.h>

using namespace std;

vector<char> tolower(vector<char> v)
{
	for(int i =0 ; i < v.size(); i++)
		v[i] = tolower(v[i]);
	return v;
}

bool compare(vector<char> a, vector<char> b)
{
	return tolower(a) < tolower(b);
}

int main()
{
	int c,r;
	
	
	while(cin >> r && cin >> c || (r != 0 && c!=0))
	{
		vector<vector<char>> grid(c);
		char n;
		
		for(int i = 0; i < r; i++)
		{
			for(int j = 0; j < c; j++)
			{
				cin>>n;
				grid[j].push_back(n);
			}
		}	
		
		
		sort(grid.begin(), grid.end(), compare);
		
		for(int i = 0; i < r; i++)
		{
			for(int j = 0; j < c; j++)
			{
				cout<<grid[j][i];
			}
			cout<<endl;
		}
		cout<<endl;
		
	}
	
	return 0;
}
