#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    
    while(cin >> n)
    {
    
        vector<int> l1;
        vector <int> l1c;
        int t;
        for(int i = 0; i < n; i++)
        {
            cin >> t;
            l1.push_back(t);
            l1c.push_back(t);
        }
        sort(l1.begin(), l1.end());
        
        vector <int> l2;
        for(int i = 0; i < n; i++)
        {
            cin >> t;
            l2.push_back(t);
        }
        
        sort(l2.begin(), l2.end());
        map <int,int> cmp;
        for(int i = 0; i < n; i++)
        {
            cmp[l1[i]] = i;
        }
        
        for(int i = 0 ; i < n; i++)
        {
            cout<<l2[cmp[l1c[i]]] <<endl;   
        }
    }
    
    
    
    return 0;
}
