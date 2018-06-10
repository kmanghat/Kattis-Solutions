#include <bits/stdc++.h>

using namespace std;


long long int BIT[1000005];

int getSum(int idx)
{
	long long int sum = 0;
	for(long long int i = idx; i > 0; i -= i &-i)
	{	
		sum += BIT[i];
	}
	
	return sum;
}

void update(long long int idx, long long int val)
{
	for(long long int i = idx; i < 1000005; i += i &-i)
	{
		BIT[i] += val;
	}
}

long long int swaps(long long int l, long long int r)
{
	return getSum(r) - getSum(l);
}
int main()
{
	memset(BIT,0,sizeof(BIT));
	long long int n,k;
	
	cin>>n>>k;
	
	int arr[1000005] = {0};
	

	long long int l,r,f;
	char req;
	for(long long int i = 0 ; i < k; i++)
	{
		cin>>req;
		
		if(req == 'F')
		{
			cin>>f;
			long long int val;
			
			if(arr[f] == 0)
			{
				val = 1;
				arr[f] = 1;
			}
			else
			{
				val = -1;
				arr[f] = 0;
			}
			
			update(f,val);
			
		}
		
		else
		{
			cin>>l>>r;
			cout<<swaps(l-1,r)<<endl;
		}
		
		/*
		cout<<"BIT ";
		for(long long int i = 1; i <= n; i++)
			cout<<BIT[i]<<" ";
			
		cout<<endl;*/
	}
	return 0;
}
