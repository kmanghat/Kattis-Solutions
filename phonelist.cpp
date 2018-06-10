#include <bits/stdc++.h>

using namespace std;


void doCase()
{
	int n;
	string in;
	cin>>n;
	vector <string> holder;
	int c = 0;
	while(n-->0)
	{
		cin>>in;
		holder.push_back(in);
	}
	
	sort(holder.begin(),holder.end());
	
	bool yes = true;
	
	for(int i = 0 ; i < holder.size() - 1 && yes; i++)
	{
		if(holder[i] == holder[i+1].substr(0,holder[i].size()))
			yes = false;
	}
	
	if(yes)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	
}
int main()
{
	int cases;
	cin>>cases;
	
	while(cases --> 0)
		doCase();
		
		
		return 0;


}
