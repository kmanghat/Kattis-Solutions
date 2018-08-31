#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    for(int i = 1; i <= n; i++)
    {
        int h;
        vector <int> heights;
        heights.resize(20);
        int steps = 0;
        int idx;
        cin >> idx;
        for(int j = 0 ; j < 20 ; j++)
        {
            cin >> h;
            
            if(j == 0)
            {
                heights[0] = h;
            }
            
            
            else
            {
                int k;
                for(k = 0; k < heights.size(); k++)
                {
                    if(heights[k] > h)
                    {
                        steps += abs(k-j);  
                        break;
                    }
                }
                
                if(k < heights.size())
                    heights.insert(heights.begin()+k,h);
                    
                else
                    heights[j] = h;
            }
        }
        cout<<idx<<" "<<steps<<endl;
    }
            
    return 0;
}

