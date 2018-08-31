#include <bits/stdc++.h>

using namespace std;


void doCase()
{
    int n,c;
    cin >> n>> c;
    
    vector<int>adj[3601];
    int button;
    for(int i = 0; i < n; i++)
    {
        cin >> button;
        
        for(int i = 0; i <= 3600; i++)
        {
            int next = i + button; 
            if(next < 0)
                next = 0;
            
            if(next > 3600)
                next = 3600;
            
            adj[i].push_back(next);
        }
    }
    
    vector <int> dist(3602,-1);
    dist[0] = 0;
    
    queue <int> q;
    q.push(0);
    
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        
        for(int i = 0; i < adj[u].size(); i++)
        {
            int v = adj[u][i];
            
            if(dist[v] == -1)
            {
                q.push(v);
                dist[v] = 1 + dist[u];
            }
        }
    }
    
    int currTime = c;
    while(dist[c] == -1) c++;
    cout << dist[c] << ' ' << c - currTime << '\n';
    
}

int main()
{
    int cases;
    cin >> cases;
    
    while(cases --> 0)
    {
        doCase();
    }
    return 0;
}
