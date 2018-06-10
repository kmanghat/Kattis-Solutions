#include <bits/stdc++.h>

using namespace std;

bool isPrime(int num)
{
	for(int i = 2; i <= sqrt(num); i++)
	{
		if(num % i == 0)
			return false;
	}
	
	return true;
}

int main()
{	
	int n;
	cin>>n;
	while(n--> 0)
	{
		string num;
		cin>>num;
		
		int size = num.size();
		set<int> unique;
		for(int i = 1; i < (1<<size); i++)
		{
			string temp = "";
			
			for(int j = 0; j < size; j++)
			{				
				if((i&(1<<j)) != 0)
				{
					temp += num[j];
				}
			}
			
			sort(temp.begin(),temp.end());
			do
			{
				int t = stoi(temp);
				unique.insert(t);
				
			}while(next_permutation(temp.begin(),temp.end()));
	
		}
		
		int count = 0;
		set<int>::iterator it;
		for(it = unique.begin(); it != unique.end(); it++)
		{
			if(*it > 1 && isPrime(*it))
				count++;
		}
		
		cout<<count<<endl;
	}


	return 0;
}
