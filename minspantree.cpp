#include <bits/stdc++.h>

using namespace std;
//Kruskals algorithm

int p[50000];
int totalWeight = 0;

//union find find
int find(int x)
{
	if(p[x] < 0)
	{
		return x;
	}
	
	p[x] = find(p[x]);
	
	return p[x];
}

//union find union
void unite(int x, int y)
{
	if((x = find(x)) == (y = find(y)))
	{
		return;
	}
	
	if(p[y] < p[x])
		swap(x,y);
	
	p[x] += p[y];
	p[y] = x;
}

//each edge contains a source(u) dest(v) and a weight
struct edge
{
	int u,v;
	int weight;
	
	edge(int _u, int _v, int _w)
	{
		u = _u;
		v = _v;
		weight = _w;
	};
};

//greedy method so orders in ascending order
bool edge_cmp(const edge &lhs, const edge &rhs)
{
	return lhs.weight < rhs.weight;
}

//n is the number of nodes
vector<edge> mst(int n, vector<edge>edges)
{
	//make set
	for(int i = 0; i < 50000; i++)
	{
		p[i] = -1;	
	}
	//sort in ascending order to pick least value edge
	sort(edges.begin(), edges.end(), edge_cmp);
	
	vector<edge> result;
	totalWeight = 0;
	//Loop through edge and make sure graph is not connected 
	for(int i = 0; i < edges.size(); i++)
	{
		int u = edges[i].u;
		int v = edges[i].v;
		
		//if graph is not connected, connect them and put in result vector
		if(find(u) != find(v))
		{
			unite(u,v);
			result.push_back(edges[i]);
			totalWeight += edges[i].weight;
		}
	}
	
	return result;
}

//format for output
bool comp(const edge &lhs, const edge &rhs)
{
	if(lhs.u == rhs.u)
		return lhs.v < rhs.v;
	
	return lhs.u < rhs.u;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int edges,nodes;
	
	while(cin>>nodes>>edges && (nodes != 0 || edges != 0))
	{
	
		vector<edge>adj;
	
		//MST has 1 less edge than normal
		int u,v,w;
		for(int i = 0; i < edges; i++)
		{
			cin>>u>>v>>w;
			
			if(u > v)
				swap(u,v);
				
			adj.push_back(edge(u,v,w));
		}
	
		vector<edge> result = mst(nodes,adj);
		sort(result.begin(), result.end(), comp);
		
		int trees = 0;
		for(int i = 0; i < nodes; i++)
		{
			if(p[i] < 0)
				trees++;
		}
		
		if(trees > 1)
			cout<<"Impossible"<<endl;
			
		else
		{
			cout<<totalWeight<<endl;
			for(int i = 0 ; i < result.size(); i++)
			{	
				if(result[i].u < result[i].v)
					cout<<result[i].u<<" "<<result[i].v<<endl;
				
				else
					cout<<result[i].v<<" "<<result[i].u<<endl;
			}
		}
	}
	
	return 0;
}
