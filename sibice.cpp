#include <bits/stdc++.h>

using namespace std;

int calculateDiagonal(int w, int h)
{
	return pow((pow(w,2) + pow(h,2)),0.5);
}

int main()
{
	int n,w,h;
	cin>>n>>w>>h;
	
	vector<int>holder;
	holder.push_back(w);
	holder.push_back(h);
	holder.push_back(calculateDiagonal(w,h));
	
	bool fit;
	for(int  i = 0; i < n; i++)
	{
		fit = false;
		int l;
		cin>>l;
		for(int j = 0; j < holder.size(); j++)
		{
			if(l <= holder[j])
			{
				fit = true;
			}
		}
		
		if(fit)
			cout<<"DA"<<endl;
	
		else
			cout<<"NE"<<endl;	
		
	}
	
	

	return 0;
}
