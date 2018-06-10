#include <bits/stdc++.h>
using namespace std;

int main()
{
	string current;
	string required;
	
	cin>>current;
	cin>>required;
	
	int hr1 = stoi(current.substr(0,2))*3600;
	int min1 = stoi(current.substr(3,2))*60;
	int sec1 = stoi(current.substr(6,2));
	int total1 = hr1+min1+sec1;
	
	
	int hr2 = stoi(required.substr(0,2))*3600;
	int min2 = stoi(required.substr(3,2))*60;
	int sec2 = stoi(required.substr(6,2));
	int total2 = hr2+min2+sec2;
	


	int total = total2 -total1;
	
	if(total <= 0)
	{
		total += 86400;
	}
	
	int hr = total/3600;
	total = total - hr*3600;
	int min = total/60;
	total = total - min*60;
	int sec = total;
	
	if(hr < 10)
	{
		cout<<"0";
	}
	cout<<hr<<":";
	
	if(min < 10)
	{
		cout<<"0";
	}
	cout<<min<<":";
	
	if(sec < 10)
	{
		cout<<"0";
	}
	cout<<sec<<endl;
	

	return 0;
}
