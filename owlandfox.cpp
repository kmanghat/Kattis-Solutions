#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    while( n --> 0)
    {
        int num;
        cin >> num;
        
        for(int i = 1; i <= 10000000 ; i *= 10)
        {
            if(num % i != 0)
            {
                num -= (i/10);
                break;
            }
        }
        
        cout << num <<endl;
    }
    return 0;
}
