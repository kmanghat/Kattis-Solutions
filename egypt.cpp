#include <bits/stdc++.h>

using namespace std;

bool right(int h, int s1, int s2)
{
    if(pow(h,2) == pow(s1,2) + pow(s2,2))
        return true;
    return false;
}
int main()
{
    vector <int> sides(3);
    while(cin >> sides[0] && cin >> sides[1] && cin >> sides[2] && sides[0] != 0)
    {
        sort(sides.begin(), sides.end());
        
        if(right(sides[2],sides[1],sides[0]))
            cout << "right" << endl;
        else
            cout << "wrong" << endl;
    }
    
    return 0;
}
