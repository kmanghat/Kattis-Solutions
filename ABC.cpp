#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a;
	
	vector<int> holder;
	for(int i = 0 ;i < 3; i++)
	{
		cin>>a;
		holder.push_back(a);
	}
	
	sort(holder.begin(),holder.end());
	
	cin.ignore();
	char order[4];
	cin.getline(order,4);
	
	for(int i = 0; i < 3; i++)
	{
		if(order[i] == 'A')
			cout<<holder[0]<<" ";
		
		
		if(order[i] == 'B')
			cout<<holder[1]<<" ";
			
		if(order[i] == 'C')
			cout<<holder[2]<<" ";
	}
	
	cout<<endl;
	


	return 0;
}
