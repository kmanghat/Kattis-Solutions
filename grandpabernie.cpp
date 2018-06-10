#include <bits/stdc++.h>

using namespace std;

int main()
{
	map<string, vector<int>> places;
	int n;
	
	cin >> n;
	string place;
	int year;
	
	for(int i = 0; i < n; i++)
	{
		cin>>place>>year;
		places[place].push_back(year);
	}
	
	map<string, vector<int>>::iterator it;
	
	for(it = places.begin(); it != places.end(); it++)
	{
		sort(it->second.begin(), it->second.end());
	}
	
	int cases;
	int travel;
	cin>> cases;
	for(int i = 0; i < cases; i++)
	{
		cin>>place>>travel;	
		cout<<places[place][travel-1]<<endl;
	}

	return 0;
}
