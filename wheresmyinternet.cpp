#include <bits/stdc++.h>

using namespace std;

int p[200100];


int find(int x)
{
	if(p[x] == x)
		return x;
	else
	{
		p[x] = find(p[x]);
		return p[x];
	}

}

void unite(int x, int y)
{
	p[find(x)] = find(y);	
}
	
int main()
{
	int n,c;
	cin>>n>>c;
	
	int h1,h2;
	
	for(int i = 1 ; i <= n; i++)
	{
		p[i] = i;
	}
	for(int i = 0; i < c; i++)
	{
		cin>>h1>>h2;
		unite(h1,h2);
	}
	
	
	bool any = false;
	for(int i = 1 ; i <= n; i++)
	{
		if(find(i) != find(1))
		{
			cout<<i<<endl;
			any = true;
		}
	}
	
	if(!any)
		cout<<"Connected"<<endl;
	cout<<endl;
	
	



	return 0;
}
