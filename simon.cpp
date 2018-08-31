#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while( n --> 0)
    {
        string l;
        getline(cin,l);
        
        istringstream iss(l);
        string word1;
        string word2;
        iss >> word1;
        iss >> word2;
        
        l.erase(0,11);
        if(word1 == "simon" && word2 == "says")
        {
            cout << l << endl;
        }
        else
        {
            cout << "\n";
        }
    }
    

    return 0;
}

