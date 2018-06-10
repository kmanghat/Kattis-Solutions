#include <bits/stdc++.h>

using namespace std;

int p[1000000];

int find(int x)
{
    if(p[x] < 0)
        return x;
        
    p[x] = find(p[x]);
    return p[x];
}

void unite(int x, int y)
{
    if((x = find(x)) == (y = find(y)))
        return;
        
    if( p[x] > p[y])
        swap(x,y);
    
    
    p[x] += p[y];
    p[y] = x;
}

int main()
{
    int n,m;
    cin>>n>>m;
    
    for(int i = 0; i < n; i++)
    {
        p[i] = -1;
    }
    
    vector<pair<int,int>> reports;
    for(int j = 0; j < m; j++)
    {
        int num1,num2;
        string op;
        
        cin>>num1>>op>>num2;
        
        if(op == "=")
        {
            unite(num1,num2);
        }
        
        else
        {
            reports.push_back(make_pair(num1,num2));
        }
    }
 	bool consistent = true;
 	
 	map<int,vector<int>> adj;
   	for(int i = 0; i < reports.size(); i++)
	{	
		int px = find(reports[i].first);
		int py = find(reports[i]. second);
		
		//cout<<reports[i].first<<" "<<px<<endl;
		//cout<<reports[i].second<<" "<<py<<endl;
		
		if(px == py)
			consistent = false;
		
	}
	
    if(consistent)
        cout<<"consistent"<<endl;
        
    else
        cout<<"inconsistent"<<endl;
    return 0;
}
