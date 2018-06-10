#include <bits/stdc++.h>

using namespace std;

struct comp
{
    bool operator()(const pair<long long int,long long int> &lhs, const pair<long long int,long long int>&rhs)
    {
        return rhs.second < lhs.second;
    }
    
};
int main()
{
	int n,q;
	cin>>n>>q;
	
	vector<pair<long long int,long long int>> info;

	for(int i = 0; i < n; i++)
	{
		long long int c,t,cpert;
		cin>>c>>t;
		info.push_back(make_pair(c,t));	
			
	}
	sort(info.begin(), info.end(), comp());
	long long int ans = 0;
	int usedTime = 0;
	

	multiset<int> avail;
    int res = 0, u = 0;
	for(long long int i = q-1; i >= 0; i--)
	{	
		while (u < n && info[u].second == i)
        {
            avail.insert(-info[u].first);
            u++;
        }

        if (!avail.empty())
        {
            res += -*avail.begin();
            avail.erase(avail.begin());
        }
		
	}
	cout<<res<<endl;
	return 0;
}
