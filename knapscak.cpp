#include <bits/stdc++.h>

using namespace std;

typedef long double ld;

struct comp
{
	bool operator()(const pair<int,ld> &lhs, const pair<int,ld> &rhs)
	{
		return lhs.second > rhs.second;	
	}
};
int main()
{
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ld c;
	long long int n;
	
	while(cin>>c && cin>>n)
	{
		vector<pair<long long int,ld>> holder;
		vector<ld> weights;
		ld v,w,vperw;
		
		weights.resize(n);
		for(long long int i = 0; i < n; i++)
		{
			cin>>v>>w;
			weights[i] = w;
			vperw = v/w;
			holder.push_back(make_pair(i,vperw));
		}
		
		sort(holder.begin(),holder.end(),comp());
		
		ld sum = 0;
		vector<long long int> index;
		for(long long int i = 0; i < n ; i++)
		{
			
			if(sum + weights[holder[i].first] <= c)
			{
				index.push_back(holder[i].first);
				sum += weights[holder[i].first];
			}
			
		}
		
		sort(index.begin(),index.end());
		cout<<index.size()<<endl;
		for(long long int i = 0; i < index.size(); i++)
			cout<<index[i]<<" ";
		cout<<endl;
	}
	
	return 0;
}
