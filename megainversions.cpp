#include <bits/stdc++.h>

using namespace std;

#define MAX_N 100005
int BIT[2*MAX_N];

int sum(int idx)
{
	int s = 0;
	for(int i = idx; i != 0; i -= (i & -i))
	{
		s += BIT[i];
	}
	
	return s;
}

void update(int idx, int val)
{
	for(int i = idx; i < 2*MAX_N; i += (i & -i))
	{
		BIT[i] += val;
	}
}
int main()
{
	int n;
	cin>>n;
	memset(BIT,0,sizeof(BIT));
	
	for(int i = 0; i < n; i++)
	{
		int t;
		cin>>t;
		update(i+1,t);
	}
	
	
	return 0;
}
