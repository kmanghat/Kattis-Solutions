#include <bits/stdc++.h>

using namespace std;

long long int pa[1000];

long long int find(long long int x)
{
	if(pa[x] < 0)
		return x;
	
	pa[x] = find(pa[x]);
	return pa[x];
}

void unite(long long int x, long long int y)
{
	if((x = find(x)) == (y = find(y)))
		return;
	
	if(pa[y] < pa[x])
		swap(x,y);
	
	pa[x] += pa[y];
	pa[y] = x;
}
int main()
{
	long long int n;
	cin>>n;
	
	for(long long int i = 1 ; i <= n; i++)
	{
		long long int a,b,p;
		cin>>a>>b>>p;
		vector<pair<long long int,vector<long long int>>> factors;
		
		for(long long int t = 0; t <= b-a; t++)
			pa[t] = -1;
		
		factors.resize(b-a+1);
		long long int c = 0;
		for(long long int j = a; j <= b; j++)
		{
			factors[c].first = j;
			long long int jcpy = j;
			
			for(long long int k = 2; k <= sqrt(jcpy); k++)
			{
				while(jcpy % k == 0)
				{
					factors[c].second.push_back(k);
					jcpy /= k;
				}
			}
			
			if(jcpy > 1)
				factors[c].second.push_back(jcpy);
		
			c++;
		}	
		
		//well....
		for(long long int l = 0; l < factors.size(); l++)
		{
			/*
			cout<<factors[l].first<<" : ";
			for(long long int g = 0; g < factors[l].second.size(); g++)
				cout<<factors[l].second[g]<<" ";
			cout<<endl;*/
			for(long long int m = l+1; m < factors.size(); m++)
			{
				
					for(long long int x = 0; x < factors[l].second.size(); x++)
					{
						for(long long int y = 0; y < factors[m].second.size(); y++)
						{
							if(factors[l].second[x] == factors[m].second[y] && factors[l].second[x] >= p)
								unite(factors[l].first - a, factors[m].first - a);
						}
					}
				
			}
		}
		
		long long int count = 0;
		long long int w;
		for(w = 0; w <= b-a; w++)
		{
			//cout<<pa[w]<<" ";
			if(pa[w] < 0)
				count++;
		}
		//cout<<endl;
		//cout<<w<<endl;
		cout<<"Case #"<<i<<": "<<count<<endl;
			

	}
	return 0;
}
