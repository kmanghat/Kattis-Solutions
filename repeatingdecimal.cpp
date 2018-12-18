#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    while(cin >> a >> b >> c)
    {
        cout << "0.";
        for (unsigned int i = 0; i < c; i += 1)
        {
            a *= 10;
            cout << a/b;
            a = a%b;
        
        }
        cout << endl;
    }
    return 0;
}
