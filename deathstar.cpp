#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    unsigned int n;
    cin >> n;
    
    vector <unsigned int> a(1001);
    
    for(unsigned int i = 0;  i < 1000; i++)
    {
        a[i] = 0;
    }
    unsigned int temp;
    for(unsigned int i =0 ; i < n; i++)
    {
        for(unsigned int j = 0; j < n; j++)
        {
            cin >> temp;
            if(i != j)
            {
                a[i] |= temp;
            }
            
        }
    }
    for (unsigned int i = 0; i < n; i += 1)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
