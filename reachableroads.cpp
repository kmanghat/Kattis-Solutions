#include <bits/stdc++.h>

using namespace std;
#define pb push_back

vector <int> graph[1000];
vector <bool> visited(1000,false);

void dfs(int u)
{
    if(visited[u])
    {
        return;
    }
    visited[u] = true;
    
    for(int i = 0; i < graph[u].size(); i++)
    {
        int v = graph[u][i];
        dfs(v);
    }
}
int main()
{
    int n;
    cin >> n;
    
    while(n --> 0)
    {
        int cities;
        cin >> cities;
        int roads;
        cin >> roads;
        int s,e;
        for(int i = 0 ; i < roads; i++)
        {
            cin >> s >> e;
            graph[s].pb(e);
            graph[e].pb(s);
        }
        
        int num = 0;
        for (unsigned int i = 0; i < cities; i += 1)
        {
            if(!visited[i])
            {
                dfs(i);
                num++;
            }
        }
        
        cout << num -1 << endl;
        for(int i = 0 ; i < 1000; i++)
        {
            graph[i].clear();
            visited[i] = false;
        }
    }
        
        
       
    return 0;
}

