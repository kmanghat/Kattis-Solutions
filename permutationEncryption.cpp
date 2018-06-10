#include <bits/stdc++.h>

using namespace std;


int roundUp(int numToround, int multiple)
{
	int remainder = numToround % multiple;
	
	if(remainder == 0)
		return numToround;
	
	return numToround + multiple -remainder;
}
int main()
{
	int n;
	
	
	while(cin>>n && n != 0)
	{
		vector<int> perm;
		vector<string> msgholder;
	
		int p;
		for(int i= 0; i < n; i++)
		{
			cin>>p;
		
			perm.push_back(p-1);
		}
	
		string msg;
	
		cin.ignore();
		getline(cin,msg);
		int len = msg.size();
	
		int padding = roundUp(len, n) - len;
		msg.append(padding,' ');
	
		len += padding;
		int numStr = len/n;
		for(int i = 0; i < numStr ; i++)
		{
			string temp = msg.substr(i*n,n);
			msgholder.push_back(temp);
			temp.clear();
		}
	
	
		cout<<"'";
		for(int i = 0 ; i < msgholder.size(); i++)
		{
			for(int j = 0 ; j < perm.size(); j++)
			{
				cout<<msgholder[i][perm[j]];
			}
		}	
		cout<<"'"<<endl;
	}
	return 0;
}
	
