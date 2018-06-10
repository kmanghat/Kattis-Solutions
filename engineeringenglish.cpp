#include <bits/stdc++.h>  

using namespace std;

int main()
{
	string in;
	map<string,int> holder;
	vector<string>msg;
	while(cin>>in)
	{
		string lowerIn = in;
		transform(lowerIn.begin(), lowerIn.end(), lowerIn.begin(), ::toupper);
		if(!holder.count(lowerIn))
		{
			cout<<in<<" ";
		}
		else
		{
			cout<<". ";
		}
		holder[lowerIn]++;
	}
	
	
	return 0;
}
