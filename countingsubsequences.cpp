#include <bits/stdc++.h>

using namespace std;

void doCase()
{
	int n;
	cin>>n;
	
	int ans = 0;
	int sum = 0;
	map<long long int,int> holder;
	
	//so when 47 is encounters it finds a zero
	holder[0] = 1;
	int f;
	while(n --> 0)
	{
		//calculate prefix sum as you take in numbers
		cin>>f;
		sum += f;
		
		//look for current sum - 47 in existing if found
		//subsequence exists
		ans += holder[sum - 47];
		
		holder[sum]++;
		
	}

	cout<<ans<<endl;
}


int main()
{
	int cases;
	cin>>cases;
	
	while( cases--> 0)
	{
		doCase();
	}
	return 0;
}
