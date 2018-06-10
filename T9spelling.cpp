#include <bits/stdc++.h>

using namespace std;

int main()
{

	int c = 0;
	cin>>c;
	cin.ignore();
	for(int j = 0; j < c; j++)
	{
		string str1;
		getline(cin,str1);
		//cin.ignore();
		
		char curr;
		int temp;
		int button;
		int presses;
		int prevButton = -1;
		
		cout<<"Case #"<<j+1<<": ";
		for(int i = 0; i < str1.size(); i++)
		{
			curr = str1[i];
			temp = curr - 'a';
		
			if(temp >= 19)
				temp--;
			
			button = temp/3 + 2;
			presses = temp%3 + 1;
		
			if( curr == 's')
			{
				button = 7;
				presses = 4;
			}
		
			if( curr == 'z')
			{
				button = 9;
				presses = 4;
			}
		
			if(curr == 32)
			{
				button = 0;
				presses = 1;
			}
		
			if(prevButton == button)
				cout<<" ";
		
			for(int i = 0; i < presses; i++)
				cout<<button;
		
			prevButton = button;
		}
		
		cout<<endl;
	}
	
	return 0;
}
