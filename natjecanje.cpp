#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,s,r;
	cin>>n>>s>>r;
	
	int arr[20];
	for(int i = 0 ; i < 20; i++)
		arr[i] = 1;
	
	int t;
	for(int i = 0; i < s; i++)
	{
		cin>>t;
		arr[t] = 0;
	}
	
	for(int i = 0; i < r; i++)
	{
		cin>>t;
		
		arr[t]++;
	}	
	
	for(int i = 1; i <= n; i++)
	{
		if(arr[i] == 0 && arr[i-1] == 2)
		{
			arr[i] = 1;
			arr[i-1] = 1;
		}
		
		if(arr[i] == 0 && arr[i+1] == 2)
		{
			arr[i] = 1;
			arr[i+1] = 1;
		}
	}
	
	
	int ans = 0;
	for(int i = 1; i <= n; i++)
	{
		if(arr[i] == 0)
			ans++;
	}
	
	cout<<ans<<endl;
	return 0;
}
