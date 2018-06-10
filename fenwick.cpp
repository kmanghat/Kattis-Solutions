#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define MAXN 5000005
long long int bit[MAXN];
long long int n,q;
long long int getSum(int idx)
{
	long long int sum = 0;
	for(int i = idx; i > 0; i -= i&-i)
	{
		sum += bit[i];
	}
	return sum;
}

void update(long long int idx, long long int val)
{
	for(long long int  i = idx; i < n+5 ; i += i&-i)
	{
		bit[i] += val;		
	}
}

int main()
{
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
	scanf("%lld%lld\n", &n, &q);
	
	for(int i = 0; i <= n; i++)
		bit[i] = 0;
	
	char l;
	long long int a,b;
	for(long long int i = 0; i < q; i++)
	{
		scanf("%c", &l);
		
		if(l == '+')
		{
			scanf("%lld%lld\n", &a, &b);
			update(a+1,b);
		}
		else
		{
			scanf("%lld\n", &a);
			printf("%lld\n", getSum(a));
		}
	
	}
	
	return 0;
}
