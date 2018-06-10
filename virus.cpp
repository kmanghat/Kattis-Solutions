#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll findAns(string &s1,string &s2)
{
	ll start = -1;
	//first mismatch from begin
	for( ll i = 0; i < s1.size() && start == -1; i++)
	{
		if(s1[i] != s2[i])
		{
			start = i;
		}
	}	
	
	if(start == -1)
	{
		if(s1.size() >= s2.size())
			return 0;
		
		else
			return s2.size() - s1.size();
	}
	
	ll end  = -1;
	ll i = s1.size() - 1;
	ll j = s2.size() - 1;
	
	//first mismatch from end
	while( i != 0 && j != 0 && end == -1)
	{
		if(s1[i] != s2[j])
			end = j;
			
		j--; i--;
	}
	
	if(start > end)
		return 0;
	return end - start + 1;


}

int main()
{
	string s1,s2;
	
	cin>>s1>>s2;
	cout<<findAns(s1,s2)<<endl;
	
	
	return 0;
}
