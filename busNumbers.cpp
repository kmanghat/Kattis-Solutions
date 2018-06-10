#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	vector<int> busNos;
	int in;
	for(int i = 0; i < n; i++)
	{
		cin>>in;
		busNos.push_back(in);	
	}
	
	sort(busNos.begin(), busNos.end());
	vector<int> holder;
	int start = 0;
	
	int idx = 0;
	
	while(idx < n)
	{
		int start = busNos[idx];
		while(idx+1 < n  && busNos[idx] == busNos[idx+1]-1)
		{
			idx++;
		}
		int end = busNos[idx];
		
		if(start == end)
		{
			cout<<start<<" ";
		}
		
		else if(start == end -1)
		{
			cout<<start<<" "<<end<<" ";
		}
		
		else
		{
			cout<<start<<"-"<<end<<" ";
		}
		
		idx++;
	}
	
	return 0;
}
