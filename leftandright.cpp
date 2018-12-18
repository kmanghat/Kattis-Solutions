#include <bits/stdc++.h>
using namespace std;

#define pb push_back
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    string in;
    cin >> in;
    
    int min = 0;
    for(int i = 0 ; i < in.size() ; i++)
    {
        if(in[i] == 'R')
        {
            min++;
            cout << min << endl;
        }
        else
        {
            int pos = -1;
            for(int j = i; j < in.size(); j++)
            {
                if(in[j] == 'R')
                {
                    pos = j;
                    break;
                }
            }
            
            if(pos == -1)
            {
               pos = n-1; 
            }
            pos++;
            for(int k = pos; k > min; k--)
            {
                cout << k << endl;
            }
            min = pos;
            i = pos-1;
        }
    }
    if(in[n-2] == 'R')
        cout << n << endl;
    return 0;
}
