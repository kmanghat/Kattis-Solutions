#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	for(int i =0 ; i < n; i++)
	{
		string msg;
	
		cin>>msg;
		double len = double(msg.size());
		bool isSquare = false;
		int initLen = len;
	
		double temp = ceil(double(sqrt(len)));
		len = pow(temp,2);
	
		msg.append(len-initLen, '*');
	
		char array[100][100];
	
		int count = 0;
		for(int i = 0; i < sqrt(len); i++)
		{
			for(int j = 0; j < sqrt(len); j++)
			{		
				array[i][j] = msg[count];
				count++;
			}
		
		}	
	
	
		string ans;
		for(int i = 0 ; i < sqrt(len); i++)
		{
			for(int j = sqrt(len)-1; j>= 0; j--)
			{
			
				if(array[j][i] != '*')
				{
					ans+= array[j][i];
				}
			}	
		}	

		cout<<ans<<endl;
	}
	return 0;
}
