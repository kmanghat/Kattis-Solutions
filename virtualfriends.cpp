#include <bits/stdc++.h>

using namespace std;


map<string,int> friends;
vector<int> p;

int find(int x)
{
	//return if parent is found 
	if(p[x] < 0)
		return x;
		
	p[x] = find(p[x]);
	return p[x];
}

void unite( int x, int y)
{
	//same set
	if((x=find(x)) == (y=find(y)))
		return ;
	
	//find which of the two has greater size
	//make x the greather size
	if(p[y] < p[x])
		swap(x,y);
	
	//add size of y to x
	p[x] += p[y];
	//set element in y to x
	p[y] = x;
}

void doCase()
{
	int n;
	cin>>n;
	
	p.clear();
	p.resize(n+2, -1);
	
	string f1,f2;
	int count = 0;
	for(int i = 0; i < n; i++)
	{
		cin>>f1>>f2;
		if(!friends.count(f1))
			friends[f1] = count++;
		if(!friends.count(f2))
			friends[f2] = count++;
		
		int posa = friends[f1];
		int posb = friends[f2];
		
		unite(posa,posb);
		cout<<-p[find(posa)]<<endl;
		
	}
}

int main()
{
	int cases;
	cin>>cases;
	while(cases --> 0)
	{
		doCase();
	}

	return 0;
}
