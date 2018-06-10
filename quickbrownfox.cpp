#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>> n;
	
	cin.ignore();
	
	while(n != 0)
	{
	
		string in;
		getline(cin,in);
		transform(in.begin(), in.end(), in.begin(), ::tolower);
		
		bool found[26] = {false};

		for(int i = 0 ; i < in.length(); i++)
		{
			char temp = in[i];
			found[temp - 'a'] = true;
		}	
		
		bool pangram = true;
		for(int i = 0; i < 26; i++)
		{
			if(found[i] == false)
			{	
				if(pangram)
				{
					cout<<"missing ";
				}
				cout<<char(char(i)+'a');
				pangram = false;
			}
		}
		
		if(pangram)
			cout<<"pangram";
			
		cout<<endl;
		n--;
	}
	


	return 0;
}
