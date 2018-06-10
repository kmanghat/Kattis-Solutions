#include <bits/stdc++.h>

using namespace std;

int main()
{
	map <string, int> variables;
	string operation;
	//get input
	while(getline(cin, operation))
	{
		map<string, int>::iterator it;
		it = variables.begin();
		
		
		istringstream iss(operation);
		vector<string> split(istream_iterator<string>{iss}, istream_iterator<string>());
		
		if(split[0] == "def")
		{
			it = variables.find(split[1]);
			
			if(it != variables.end())
			{
				variables.erase(it);
			}
			
			variables.insert( pair<string,int>(split[1],stoi(split[2])));
			
		}
		
		if(split[0] == "clear")
		{
			variables.clear();
		}
	
		if(split[0] == "calc")
		{
			vector<int> operand;
			vector<string> oper;
			bool unknown = false;
			for(int i = 1; i < split.size() - 1 && unknown == false; i++)
			{
				//store operators
				if(i % 2 == 0)
				{
					oper.push_back(split[i]);
				}
				
				//store all numbers
				else
				{
					it = variables.begin();
					it = variables.find(split[i]);
					
					if(it != variables.end())
					{
						operand.push_back(it -> second);
						
					}
					else
					{
						unknown = true;
					}
					
				}
			
			} 
			
			string ans;
			if(!unknown)
			{
				int a = operand[0];
			
				for(int i = 0; i < oper.size(); i++)
				{
					if(oper[i] == "+")
					{
						a = operand[i] + operand[i+1];
					}
				
					else
					{
						a = operand[i] - operand[i+1];
					}
				
					operand[i+1] = a;
				}
			
				
				bool found = false;
				//find answer in variable lis
				for(it = variables.begin(); it != variables.end(); it++)
				{
					if(it-> second == a)
					{
						ans = it->first;
						found = true;
					}
				
				}
				if(!found)
				{
					unknown = true;
				} 
			
			}
			//print string out
			for(int i = 1 ; i < split.size(); i++)
			{
				cout<<split[i]<<" ";
			}
			
			//if answer cannot be found
			if(unknown == true)
			{
				cout<<"unknown"<<endl;
			}
			
			else
			{
				cout<<ans<<endl;
			}
			
		}
		
		
	
	}
	return 0;
}
