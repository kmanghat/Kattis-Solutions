#include <bits/stdc++.h>

using namespace std;

int main()
{
    map <string,int> store;
    string name;
    int max = 0;
    string ans;
    while(getline(cin,name) && name != "***")
    {
        store[name]++;
        if(store[name] > max)
        {
            max = store[name];
            ans = name;
        }
    }
    
    map <string,int>:: iterator it;
    int count = 0;
    for(it = store.begin() ; it != store.end() ; it++)
    {
        if(it->second == max)
        {
            count++;
        }
    }
    
    if(count == 1)
        cout << ans << endl;
        
    else
        cout << "Runoff!" <<endl;
    
    return 0;
}


