#include <bits/stdc++.h>

using namespace std;
int main()
{
	int width;
	int partition;
	vector<int> p;
	
	p.push_back(0);
	cin>>width>>partition;
	int n;
	for(int i =0 ; i < partition; i++)
	{
		cin>>n;
		p.push_back(n);
		
	}
	
	p.push_back(width);
	vector<int> holder;
	for(int i = 0; i < p.size(); i++)
	{
		for(int j = i; j < p.size();j++)
		{
			int diff = p[j] - p[i];
			holder.push_back(diff);
		}
			
		
	}
	
	sort(holder.begin(),holder.end());
	
	for( int i = 0; i < holder.size()-1;)
	{
		if(holder[i] == holder[i+1] || holder[i] == 0)
		{
			holder.erase(holder.begin() + i);		
		}
		else
			i++;
	}
	
	
	for(int i = 0; i < holder.size(); i++)
	{
		cout<<holder[i]<<" ";
			
		
	}
	
	cout<<endl;
	
	return 0;
}
