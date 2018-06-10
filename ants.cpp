#include <bits/stdc++.h>

using namespace std;

void docase()
{
	int l,n;
	cin>>l>>n;
	
	int in;
	vector<int> h;
	int maxDiff = 0;
	int minDiff  = 0;
	int diff;
	int diffBegin;
	int diffEnd;
	for(int i = 0; i < n; i++)
	{
		cin>>in;
		h.push_back(in);
		diffEnd = l-in;
		diffBegin = in - 0;
		
		if(diffBegin > diffEnd)
			diff = diffBegin;
			
		else
			diff = diffEnd;
			
		if(i == 0)
		{
			minDiff = diff;
			maxDiff = diff;
		}
		
		if(diff > maxDiff)
			maxDiff = diff;
		if(diff < minDiff)
			minDiff = diff;
	}
	
	cout<<l -minDiff<<" "<<maxDiff<<endl;
}
int main()
{
	int cases = 0;
	
	cin>>cases;
	
	while(cases != 0)
	{
		docase();
		cases--;
	}

	return 0;
}
