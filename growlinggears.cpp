#include <bits/stdc++.h>

using namespace std;

void doCase()
{
	int n;
	cin>>n;
	
	int ans = 0;
	int max = -2000000;
	for(int i = 1; i <= n; i++)
	{
		double a,b,c;
		cin>>a>>b>>c;
		
		//f(x) = -aR^2 + bR + c
		//f'(x) = 0 = -2aR + b
		// R = b/2a
		double R = b/(2*a);
		double temp = -a*R*R + b*R +c;
		
		if(temp>max)
		{
			max = temp;
			ans = i;
		}
	}
	cout<<ans<<endl;
}
		
int main()
{
	int cases;
	cin>>cases;
	
	while(cases --> 0)
		doCase();

	return 0;
}
