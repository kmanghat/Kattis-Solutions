//Bellman Ford
#include <bits/stdc++.h>

using namespace std;

const int size = 100000;
#define INF 20000000

//each edge of the graph 
struct edge
{
	int u,v;
	int weight;
	
	edge(int _u, int _v, int _w)
	{
		u = _u;
		v = _v;
		weight = _w;
	}
};



int main()
{
	//optimizations
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m,q,s;
	
	
	while(cin>>n>>m>>q>>s && (n != 0 || m != 0 || q != 0 || s!= 0))
	{
		//create vector to hold edges and distances. assign distances to INF
		vector<edge> adj[size];
		vector<int> dist(size,INF);
		for(int i = 0; i < m; i++)
		{
			int u,v,w;
			cin>>u>>v>>w;
		
			adj[u].push_back(edge(u,v,w));
		}
		
		//Bellman Ford Algorithm
		dist[s] = 0;
		
		//Loop through all edges vertices-1 time an relax each edge
		for(int i = 0; i < n-1; i++)
		{
			for(int u = 0; u < n; u++)
			{
				for(int j = 0; j < adj[u].size(); j++)
				{
					int v = adj[u][j].v;
					int w = adj[u][j].weight;
					//Relaxation of edges
					if(w + dist[u] < dist[v] && dist[u] != INF)
						dist[v] = dist[u] + w;
				}
			}
		}
		
		//loop to find negative cycles in the graph
		//If you run Bellman ford again and weights of vertices change 
		//negative cycles exist
		for(int i = 0; i < n-1; i++)
		{
			for(int u = 0; u < n; u++)
			{
				for(int j = 0; j < adj[u].size(); j++)
				{
					int v = adj[u][j].v;
					int w = adj[u][j].weight;
					if(w + dist[u] < dist[v] && dist[u] != INF)
						dist[v] = -INF;
				}
			}
		}
		
		while( q --> 0)
		{
			int query;
			cin>>query;
			
			if( dist[query] == -INF)
				cout<<"-Infinity"<<endl;
				
			else if(dist[query] == INF)
				cout<<"Impossible"<<endl;
				
			else
				cout<<dist[query]<<endl;
			
		}
	}
		
		
		
	return 0;

}

