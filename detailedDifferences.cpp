#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n --> 0)
	{
		string first,second,ans;
		cin>>first>>second;
		
		ans = "";
		for(unsigned int i = 0 ; i < first.size(); i++)
		{
			if(first[i] == second[i])
				ans += '.';
			else
				ans += '*';
		}
		
		cout<<first<<endl;
		cout<<second<<endl;
		cout<<ans<<"\n\n";
	}

	return 0;
}
