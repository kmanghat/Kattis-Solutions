#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    
    while(cin >> n && n != 0)
    {
        map <string, vector<string>> store;
        string order;
        vector <string> food;
        cin.ignore();
        for( int i = 0; i < n; i++)
        {
            getline(cin,order);
            istringstream iss(order);
            
            string name;
            iss >> name;
            do
            {
                string f;
                iss >> f;
                if(!f.empty())
                {
                    store[f].push_back(name);
                    vector <string>::iterator it;
                    it = find(food.begin(), food.end(), f);
                    
                    if(it == food.end())
                        food.push_back(f);
                }
            }while(iss);
            
            sort(food.begin(), food.end());
        }
        
        for(int i = 0; i < food.size() ; i++)
        {
            cout << food[i] << " ";
            sort(store[food[i]].begin() , store[food[i]].end());
            for(int j = 0; j < store[food[i]].size() ; j++)
            {
                cout<<store[food[i]][j]<<" ";
            }
            cout<<endl;
        }
        cout << endl;
    }

    return 0;
}


