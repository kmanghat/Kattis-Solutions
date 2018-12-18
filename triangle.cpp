#include <bits/stdc++.h>
using namespace std;

#define pb push_back
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    int i = 1;
    while (cin >> n)
    {
        cout << "Case "<<i<<": ";
        double l3 = log10(3);
        double l1 = log10(1.5);
        
        cout << (int)(l3 + (n*l1))+1 << endl;
        i++;
    }
    return 0;
}
