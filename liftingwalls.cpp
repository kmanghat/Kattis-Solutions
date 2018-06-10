#include <bits/stdc++.h>

using namespace std;

double calculateDistance(double x, double y, double x1, double y1)
{
	return sqrt(pow(abs(x1-x),2) + pow(abs(y1-y),2));
}

struct comp
{
	bool operator()(const vector<int> &lhs, const vector<int> &rhs)
	{
		return lhs.size() > rhs.size();
	}
};

int main()
{
	double l,w,n,r;
	vector<pair<double,double>> locations;
	cin>>l>>w>>n>>r;
	double x,y;
	for(int i = 0; i < n; i++)
	{
		cin>>x>>y;
		locations.push_back(make_pair(x,y));
	}
	
	
	vector<pair<double,double>> centers;
	centers.push_back(make_pair(-l/2,0));
	centers.push_back(make_pair(l/2,0));
	centers.push_back(make_pair(0,w/2));
	centers.push_back(make_pair(0,-w/2));
	
	vector <vector<int>> numCenters;
	numCenters.resize(n);
	
	for(int i = 0 ; i < n; i++)
	{
		for(int j = 0; j < centers.size();j++)
		{
			if(calculateDistance(locations[i].first,locations[i].second,centers[j].first,centers[j].second) <= r)
			{
				numCenters[i].push_back(j);
			}
		}
	}
	
	sort(numCenters.begin(), numCenters.end(),comp());
	
	vector<bool> check {false,false,false,false};
    bool impossible = false;
    int count = 0;
    for(int i = 0; i < numCenters.size(); i++)
    {
        int f = 0;
        for(int j = 0; j < numCenters[i].size(); j++)
        {
            if(!check[numCenters[i][j]])
            {
                check[numCenters[i][j]] = true;
                if(f == 0)
                {
                    f++;
                    count++;
                }
            }
        }
    }
    
    for(int i = 0; i < check.size(); i++)
    {
        if(check[i] == false)
            impossible = true;
    }
    
    for(int i = 0; i < numCenters.size(); i++)
    {
    
    		
    	for(int j = i+1; j < numCenters.size(); j++)
    	{
    		set<int> ways;
    	
    		for(int k = 0; k < numCenters[i].size(); k++)
    			ways.insert(numCenters[i][k]);
    		
   			for(int k = 0; k < numCenters[j].size(); k++)
    			ways.insert(numCenters[j][k]);
    			
    		if(ways.size() == 4)
    			count = 2;
    			
    		
    	}
    }
    
    if(impossible)
        cout<<"Impossible"<<endl;
    else
        cout<<count<<endl;
        
    return 0;
}
