#include <iostream>
#include<cmath>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	string num1;
	string num2;
	string num3;
	string num4;
	
	cin>>num1;
	cin>>num2;

	int diff;
	
	int len1 = num1.length();
	int len2 = num2.length();
	int size = 0;
	diff = abs(len1 - len2);
	
	if(len1 < len2)
	{
		num1.insert(num1.begin(),diff,'0');
	}
		
	if(len1 > len2)
	{
		num2.insert(num2.begin(),diff,'0');
	}
	
	size = num1.length();
	for(long int i = 0; i < size; i++)
	{
		
		if(num1.at(i)  > num2.at(i) )
		{
			num3.push_back(num1.at(i));
		}
		
		if(num1.at(i)  < num2.at(i))
		{
			num4.push_back(num2.at(i));
		}
		
		if(num1.at(i)  == num2.at(i))
		{ 
			num3.push_back(num1.at(i));
			num4.push_back(num2.at(i));
		}
		
	}
	
	
	if(num3.empty())
	{
		num3 = "YODA";
		cout<<num3<<endl;
	}
	else
	{
		cout<<stoi(num3)<<endl;
	}
	
	
	if(num4.empty())
	{
		num4 = "YODA";
		cout<<num4<<endl;
	}
	else
	{
		cout<<stoi(num4)<<endl;
	}
	
	return 0;
}
