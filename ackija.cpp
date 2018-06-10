#include <bits/stdc++.h>

using namespace std;

int main()
{	
	int num;
	cin>>num;
	
	int amountToBuy = num/3;
	amountToBuy *= 2;
	amountToBuy += num%3;
	
	vector<int> prices;
	int price;
	while(num --> 0)
	{
		cin>>price;
		prices.push_back(price);
	}
	
	sort(prices.rbegin(),prices.rend());
	
	int ans = 0;
	int i = 0;
	int bought = 0;
	while( i < prices.size())
	{
		if( i % 3 != 2)
		{
			ans += prices[i];
		}
		i++;
	}
		
	
	cout<<ans<<endl;
		

	return 0;
}
