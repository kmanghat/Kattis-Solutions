#include<bits/stdc++.h>

using namespace std;

void doCase()
{
	int sum;
	int diff;
	cin>>sum>>diff;
	
	if(diff >= sum && (diff != 0 || sum != 0))
	{
		cout<<"impossible"<<endl;
		return;
	}
	
	if((sum+diff)%2 == 1)
	{
		cout<<"impossible"<<endl;
		return;
	}
	
	int score1 = (sum+diff)/2;
	int score2 = sum-score1;
	
	if(score2 > score1)
		swap(score1,score2);
		
	cout<<score1<<" "<<score2<<endl;

}

int main()
{
	int n;
	cin>>n;
	
	while(n-->0)
	{
		doCase();
	}


	return 0;
}
