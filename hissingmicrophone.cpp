#include <bits/stdc++.h>

using namespace std;

int main()
{
    string in;
    cin >> in;
    
    size_t found = in.find("ss");
    
    if(found == string::npos)
    {
        cout << "no hiss" << endl;
    }
    
    else
    {
        cout << "hiss" << endl;
    }
    
    return 0;
}

