#include <bits/stdc++.h>

using namespace std;

int main()
{
	string in;
	while(getline(cin,in))
	{
		transform(in.begin(),in.end(),in.begin(), ::tolower);
		if(in.find("problem") != string::npos)
		{
			cout<<"yes";
		}
		
		else
			cout<<"no";
		
		cout<<endl;
	}

	return 0;
}
