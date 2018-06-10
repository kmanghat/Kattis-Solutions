#include <bits/stdc++.h>

using namespace std;

int convertToDecimal(string binary)
{
	reverse(binary.begin(),binary.end());
	int ans = 0;
	for(int i = 0 ; i < binary.size();i++)
	{
		if(binary[i] == '1')
			ans += pow(2,i);
	}
	return ans;
	
}

int main()
{
	string binary;
	cin>>binary;
	
	int pad = binary.size()%3;
	
	if(pad == 0)
		pad = 0;
	else
		pad = 3 - pad;
		
	binary.insert(0,pad,'0');
	
	for(int i = 0 ; i < binary.size(); i+= 3)
	{
		string sub = binary.substr(i,3);
		//cout<<i<<" "<<sub<<endl;
		int ans = convertToDecimal(sub);
		cout<<ans;
	}
	cout<<endl;
	return 0;
}
