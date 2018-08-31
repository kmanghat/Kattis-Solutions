#include <bits/stdc++.h>

using namespace std;

set <int> primes;

void primeSieve()
{
    int n = 10000;
    bool prime[10001];
    for(int i = 0 ; i < 10001; i++)
    {
        prime[i] = true;
    }
    
    for(int i = 2 ; i <= sqrt(n)+1; i++)
    {
        if(prime[i] == true)
        {
            for(int j = i*2 ; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }
    
    for(int i = 999; i <= 10000; i++)
    {
        if(prime[i])
        {
            primes.insert(i);
        }
    }
}

vector <int> adj(int num)
{
    vector <int> ans;
    int next;
    int digit;
    for(int i = 1000; i >= 1; i/=10)
    {
        digit = (num / i) % 10;
        for(int j = 0; j <= 9; j++)
        {
            next = num - (digit*i) + (j * i);
            set<int>:: iterator it;
            it = primes.find(next);
            if(it != primes.end() && next != num && next >= 1000)
            {
                ans.push_back(next);
            }
        }
    }
    
    return ans;
}
int main()
{
    int n;
    primeSieve();
    cin >> n;
    vector <int> ans;
    while( n --> 0)
    {
        int beg,end;
        cin >> beg >> end;
        vector <int> dist(9001,1e9);
        queue <int> q;
        q.push(beg);
        dist[beg - 1000] = 0;
        while(!q.empty())
        {
            int f = q.front();
            ans = adj(f);
            q.pop();
            for(int i = 0; i < ans.size() ; i++)
            {
                if(dist[ans[i] - 1000] > 1 + dist[f - 1000])
                {
                    q.push(ans[i]);
                    dist[ans[i] - 1000] = 1 + dist[f - 1000];
                }
                
            }
        }
        
        cout << dist[end-1000] << endl;
        
    }
    
    return 0;
}


