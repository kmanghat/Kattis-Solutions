#include <bits/stdc++.h>

using namespace std;

int main()
{

	vector<string> chart;
	string in;
	
	int rows = 0;
	while(getline(cin,in))
	{
		if(in == "")
		{
			int totalStars = 0;
			for(int k = 0 ; k < chart.size(); k++)
			{
				int stars = 0;
				
				for(int j = 0; j < chart[k].size(); j++)
				{
					if(chart[k][j] == '*')
					{
						stars++;
					}
				}
				
				string line;
				for(int i = 0; i < totalStars; i++)
				{
					line += ".";
				}
				
				for(int i = 0; i < stars; i++)
				{
					line += "*";
				}
			
				for(int i = totalStars+stars; i < chart[k].size(); i++)
				{
					line += ".";
				}
				
				reverse(line.begin(),line.end());
				cout<<line<<endl;
				totalStars += stars;
				
			
			}
			
			chart.clear();
		}
		
		chart.push_back(in);
	}
	
	//shouldve made a function...
	int totalStars = 0;
	for(int k = 0 ; k < chart.size(); k++)
	{
		int stars = 0;
		
		for(int j = 0; j < chart[k].size(); j++)
		{
			if(chart[k][j] == '*')
			{
				stars++;
			}
		}
		
		string line;
		for(int i = 0; i < totalStars; i++)
		{
			line += ".";
		}
		
		for(int i = 0; i < stars; i++)
		{
			line += "*";
		}
	
		for(int i = totalStars+stars; i < chart[k].size(); i++)
		{
			line += ".";
		}
		
		reverse(line.begin(),line.end());
		cout<<line<<endl;
		totalStars += stars;
	}
	return 0;
}
