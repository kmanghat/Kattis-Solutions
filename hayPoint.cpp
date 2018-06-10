#include <bits/stdc++.h>
using namespace std;

int main()
{
	int m,n;
	cin>>m>>n;
	
	string word;
	int pt;
	
	map<string,long long int> data;
	
	for(int i = 0; i < m; i++)
	{
		cin>>word>>pt;
		data[word] = pt;
	}
	
	for(int k = 0; k < n; k++)
	{
		int score = 0;
		map<string,long long int>::iterator it;
	
		while(cin >> word && word != ".")
		{
			it = data.begin();
			it = data.find(word);
		
			if(it != data.end())
			{
				score += it->second;
			}	
		
		}	
	
		cout<<score<<endl;
	}
	return 0;
}
