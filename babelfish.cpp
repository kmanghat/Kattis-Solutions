#include <bits/stdc++.h>
#include <sstream>

using namespace std;

int main()
{
	map<string,string> dictionary;
	
	string in;
	
	while(getline(cin,in) && in != "")
	{
		istringstream ss(in);
		
		string a,b;
		int count = 0;
		while(count < 2)
		{
			if(count == 1)
				ss >> b;
			else
				ss >> a;
			
			count++;
		}
		dictionary[b] = a;
	}
	
	string query;
	
	while(cin>> query)
	{
		if(dictionary.find(query) == dictionary.end())
			cout<<"eh"<<endl;
		else
			cout<<dictionary[query]<<endl;
	}
	
	return 0;
}
