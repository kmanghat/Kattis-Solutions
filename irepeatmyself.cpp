#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while( n --> 0)
    {
        string in;
        getline(cin,in);
        int j = 0;
        int ans = 0;
        for(int i = 1; i <= in.size() ; i++)
        {
            string sub = in.substr(0,i);
            int k = 0;
            for(j = i; j < in.size() ; j++)
            {
                if(sub[k] == in[j])
                {
                    k++;
                    if( k == sub.size() )
                        k = 0;
                }
                else
                    break;
                
            }
            
            if( j == in.size())
            {
                ans = i;
                break;
            }
        }
        cout << ans <<endl;
    }
    return 0;
}
