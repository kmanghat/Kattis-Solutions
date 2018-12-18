#include <bits/stdc++.h>
using namespace std;

#define pb push_back
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int c;
    cin >> c;
    int i = 1;
    while( c--> 0)
    {
        int n; cin >> n;
        int k; cin >> k;
        
        int m = pow(2,n) - 1;
        
        cout << "Case #" << i << ": ";
        if(k == 0)
            cout << "OFF" << endl;
        else if((m & k) == m)
            cout << "ON" << endl;
        else
            cout << "OFF" << endl;
        
        i++;
    }  
    return 0;
}
