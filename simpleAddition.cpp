#include <bits/stdc++.h>

using namespace std;

int main()
{	
	string num1;
	string num2;
	
	cin>>num1;
	cin>>num2;
	
	
	if(num1.size() > num2.size())
	{
		int diff = num1.length() - num2.length();
		num2.insert(0,diff,'0');
	}
	
	else
	{
	
		int diff = num2.length() - num1.length();
		num1.insert(0,diff,'0');
	}
	
	string sum;
	int carry = 0;
	int p = 0;
	for(int i = num1.length()-1; i >= 0; i--)
	{
		int ans = 0;
		p = 0;
		int n1 = num1[i] - '0';
		int n2 = num2[i] - '0';
		ans = n1 + n2;
		p = ans + carry;
		carry = p/10;
		p = p % 10;
		sum.insert(0,to_string(p));
	}
	
	if(carry == 1)
		sum.insert(0,to_string(carry));
		
	cout<<sum<<endl;
	return 0;
}
