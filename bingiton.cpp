#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    map <string,int> dictionary;
    
    while(n --> 0)
    {
        string in;
        cin >> in;
        
        map <string,int>::iterator it;
        it = dictionary.find(in);
        
        if(it != dictionary.end())
        {
            cout << it->second <<endl;
        }
        else
        {
            cout << "0" <<endl;
        }
        
        for(int i = 1; i < in.size() ; i++)
        {
            dictionary[in.substr(0,i)]++;
        }   
        dictionary[in]++;
    }

    return 0;
}

