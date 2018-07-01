#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int n;
	cin>>n;
	
	int t;
	vector<int >cards;
	for(long long int i = 0; i < n; i++)
	{
		cin>>t;
		cards.push_back(t);
	}
	
	bool change = true;
	
	while(change && cards.size() != 0)
	{
		change = false;
		for(long long int i = 0; i < cards.size()-1; i++)
		{
			if((cards[i]+cards[i+1])%2 == 0 && cards[i] != 0 && cards[i+1] != 0)
			{
				cards[i] = 0;
				cards[i+1] = 0;
				change = true;
			}
		}
		
		cards.erase(remove(cards.begin(),cards.end(),0),cards.end());
	}
	
	cout<<cards.size()<<endl;
			

	return 0;
}
