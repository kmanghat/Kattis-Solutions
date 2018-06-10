#include <bits/stdc++.h>

using namespace std;


#define MAXN 1000000
int bit[MAXN];

int getSum(int idx)
{
	int sum = 0;
	
	for(int i = idx; i > 0; i -= i&-i)
		sum += bit[i];
	
	return sum;
}

void update(int idx,int val)
{
	for(int i = idx; i < MAXN; i += i&-i)
		bit[i] += val;
}

int main()
{
	int n;
	cin>>n;
	int arr[MAXN];
	int cpy[MAXN];
	int in;
	int ans = 0;
	int c = 1;
	
	for(int i = 0; i < n; i++)
	{
		cin>>arr[c];
		cpy[c] = arr[c];
		c++;
	}
	sort(cpy+1,cpy+n+1);
	for(int i = 1; i <= n; i++)
	{
		int l = int(lower_bound(cpy,cpy+n,arr[i])-cpy);
		arr[i] = l;
	}
	
	memset(bit,0,sizeof(bit));
	
	for(int i = 1; i <= n; i++)
	{
		int s = getSum(arr[i]);
		if(s+1 == arr[i] && n-i >= n-arr[i])
		{
			ans++;
		}
			
		update(arr[i],1);	
	}
	cout<<endl;
	cout<<ans<<endl;
	return 0;
}	
