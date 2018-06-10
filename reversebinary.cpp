#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	ll num;
	cin>>num;
	
	string ans = "";
	
	while(num)
	{
		if((num&1) == 1)
		{
			ans += "1";
		}
		else
		{
			ans += "0";
		}
		
		num = num>>1;
	}
	
	reverse(ans.begin(),ans.end());
	
	ll decimalAns = 0;
	for(ll i = 0; i < ans.size(); i++)
	{
		if(ans[i] == '1')
		{
			decimalAns += pow(2,i);
		}
	}
	
	cout<<decimalAns<<endl;
		
	return 0;
}
