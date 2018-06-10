#include <bits/stdc++.h>

using namespace std;

int main()
{	
	string in;
	
	cin>>in;
	stack <char> holder;
	
	for(int i = 0; i < in.size(); i++)
	{
		if(in[i] == '<')
		{
			holder.pop();
		}
		else
		{
			holder.push(in[i]);
		}
	}
	
	string ans = " ";
	while(!holder.empty())
	{
		ans += holder.top();
		holder.pop();
	}
	
	for(int i = ans.length()-1; i >= 0; i--)
	{
		cout<<ans[i];
	}
	cout<<endl;
	return 0;
}
