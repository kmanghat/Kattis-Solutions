#include <bits/stdc++.h>

using namespace std;

int main()
{
	string op;
	
	map<string,int> variables;
	while(cin >> op)
	{
		int num;
		string name;
		
		if(op == "define")
		{
			cin>>num;
			cin>>name;
			
			variables[name] = num;
		}
		
		string a,b,cmp;
		if(op == "eval")
		{
			cin>>a>>cmp>>b;
			if(variables.find(a) == variables.end() || variables.find(b) == variables.end())
			{
				cout<<"undefined"<<endl;
			}
			
			else
			{
				if(cmp == "=")
				{
					if(variables[a] == variables[b])
						cout<<"true"<<endl;
					
					else
						cout<<"false"<<endl;

				}
				
				if(cmp == ">")
				{
					if(variables[a] > variables[b])
						cout<<"true"<<endl;
					
					else
						cout<<"false"<<endl;

				}
				
				if(cmp == "<")
				{
					if(variables[a] < variables[b])
						cout<<"true"<<endl;
					
					else
						cout<<"false"<<endl;

				}
			}
		
		}
	}
	return 0;
}
