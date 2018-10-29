#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int m = 0;
    int w = 0;   
    for(int i = 0 ; i < s.size() ; i++)
    {
        if(s[i] == 'W')
        {
              if(abs((w+1)-m) <= n)  
              {
                     w++;
              }
              else if(s[i+1] == 'M')
              {
                    m++;
                    char t = s[i];
                    s[i] = s[i+1];
                    s[i+1] = t;
              }
              else
              {
                  break;
              }
        }  
        else
        {
              if(abs((m+1)-w) <= n)  
              {
                     m++;
              }
              else if(s[i+1] == 'W')
              {
              		w++;
                    char t = s[i];
                    s[i] = s[i+1];
                    s[i+1] = t;
              }
              else
              {
              		break;
              }
        }
    }
    cout << m+w << endl;
    return 0;
}
