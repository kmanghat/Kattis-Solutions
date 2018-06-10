#include <bits/stdc++.h>

using namespace std;

long int hashFunction( string str)
{
	int hash = 0;
	
	for(int i = 0; i < str.size();i++)
	{
		hash ^= str[i];
	}
	
	return hash;
}

int main()
{
	int n;
	long int h;
	while(cin >> n && n!=0)
	{	
		cin.ignore();
		
		int collision = 0;
		int identical = 0;
		vector<string> holder;
		vector<int> holder2;
		
		for(int i = 0; i < n; i++)
		{
			string in;
			getline(cin,in);
			h = hashFunction(in);
			
			if(holder.empty())
			{
				holder2.push_back(h);
				holder.push_back(in);
			}
			else
			{
				bool once = false;
				for(int i = 0; i < holder2.size(); i++)
				{
					if(holder2[i] == h)
					{
						if(holder[i] == in && !once)
						{
							identical++;
							once = true;
						}
						if(holder[i] != in)
						{
							collision++;
						
						}
							
					}
				
				
				}
				
				holder2.push_back(h);
				holder.push_back(in);
			}
			
				
		
		}

		cout<<n - identical<<" "<<collision<<endl;
	}
		

	
	return 0;
	
}
