#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int cases;
	int tests;
	vector<int>scores;
	double avg;
	int count;
	int score;
	double ans;
	cin>>cases;
	
	while(cases != 0)
	{
		cin>>tests;
		
		for(int i=0; i<tests; i++)
		{
			cin>>score;
		
			scores.push_back(score);
			avg += score;
		}
		avg = avg/double(tests);
		
		
		for(int x : scores)
		{
			if(x > avg)
				count++;
		}
		ans = (double(count)/double(tests)) * 100;
		cout<<fixed;
		cout<<setprecision(3);
		cout<<ans<<"%"<<endl;
		
		avg = 0;
		count = 0;
		scores.clear();
		cases--;
	}
	
	
	return 0;
}
