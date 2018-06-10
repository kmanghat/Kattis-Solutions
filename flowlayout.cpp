#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	ll length;
	
	while(cin>>length && length != 0)
	{
		ll l,w;
		
		vector<vector<pair<int,int>>> window;
		
		ll currWidth = 0;
		vector<pair<int,int>> temp;
		while(cin >>l && cin >>w && (l!=-1	|| w != -1))
		{
			if(length >= (l+currWidth))
			{
				currWidth += l;
				temp.push_back(make_pair(l,w));
			}
			else
			{
				window.push_back(temp);
				temp.clear();
				currWidth = 0;
				
				currWidth += l;
				temp.push_back(make_pair(l,w));
			}
		}
		
		if(!temp.empty())
			window.push_back(temp);
			
		ll totalLength = 0;
		ll totalWidth = 0;
		for(int i = 0; i < window.size(); i++)
		{
			ll maxWidth = 0;
			ll temp = 0;
			for(int j = 0; j < window[i].size(); j++)
			{
				if(maxWidth < window[i][j].second)
					maxWidth = window[i][j].second;
				
				temp += window[i][j].first;
			}
			
			if(temp > totalLength)
				totalLength = temp;
				
			totalWidth += maxWidth;
		}
		
		cout<<totalLength<<" x "<<totalWidth<<endl;
	}
	
}
				
