#include <bits/stdc++.h>

using namespace std;

#define MAXN 100000000
long long int p[MAXN];

long long int find(long long int x)
{
	if(p[x] < 0)
		return x;
		
	p[x] = find(p[x]);
	return p[x];
}

void unite(long long int x, long long int y)
{
	if((x=find(x)) == (y=find(y)))
		return;
		
	if(p[y] < p[x])
		swap(x,y);
	
	p[x] += p[y];
	p[y] = x;
}

int main()
{
	 ios_base::sync_with_stdio(false);
	 cin.tie(NULL);
	 cout.tie(NULL);
	
	long long int n,q;
	cin>>n>>q;
	
	for(int i = 0; i < n; i++)
	{
		p[i] = -1;
	}
	
	char op;
	long long int num1,num2;
	for(long long int i = 0; i < q; i++)
	{
		cin>>op>>num1>>num2;
		
		if(op == '?')
		{
			if(find(num1) == find(num2))
				cout<<"yes"<<endl;
				
			else
				cout<<"no"<<endl;
		}
		
		else
		{
			unite(num1,num2);
		}
	}

	return 0;
}
