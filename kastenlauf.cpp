#include <bits/stdc++.h>

using namespace std;


//returns true if dist is less than or equal to 1000
bool calculateDistance(int x1,int y1, int x2,int y2)
{
	int x = abs(x1 -x2);
	int y = abs(y1 - y2);
	
	int dist = x + y;
	
	return dist <= 1000;

}

vector<int> p;

int find(int x)
{
	//return if parent is found
	if(p[x] < 0)
		return x;
	
	p[x] = find(p[x]);
	
	return p[x];	
	
}

void unite(int x, int y)
{
	//they belong to same set
	if((x=find(x)) == (y = find(y)))
	{
		return;
	}
	
	//make x the one with greater size or depth 
	if(p[y] < p[x])
		swap(x,y);
		
	p[x] += p[y];
	
	p[y] = x;
}

void doCase()
{
	//read number of stores and increment by two for start and end
	int n;
	cin>>n;
	
	n += 2;
	
	p.assign(n,-1);
	//hold x co ordinates and temporary variables to get x,y
	vector<int> x;
	vector<int> y;
	int a,b;
	
	while(n --> 0)
	{
		cin>>a>>b;
		x.push_back(a);
		y.push_back(b);
	}
	
	//loop through all points and union them if the distance between them is less than 1000
	for(int i = 0 ; i < x.size()-1; i++)
	{
		for(int j = i; j < x.size(); j++)
		{
			bool valid = calculateDistance(x[i],y[i],x[j],y[j]);
			
			if(valid)
			{
				unite(i,j);
			}
		}
	}
	
	//check to see if start and end belong in same set if they do then happy
	if(find(0) == find(x.size()-1))
		cout<<"happy"<<endl;
	else
		cout<<"sad"<<endl;
		
	p.clear();
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
