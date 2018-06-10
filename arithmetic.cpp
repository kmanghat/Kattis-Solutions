#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

string convertToBinary(char oct)
{
	string ans;
	
	if( oct == '0')
	{
		ans = "000";
	}
	
	if( oct == '1')
	{
		ans = "001";
	}
	
	if( oct == '2')
	{
		ans = "010";
	}
	
	if( oct == '3')
	{
		ans = "011";
	}
	
	if( oct == '4')
	{
		ans = "100";
	}
	
	if( oct == '5')
	{
		ans = "101";
	}
	
	if( oct == '6')
	{
		ans = "110";
	}
	
	if( oct == '7')
	{
		ans = "111";
	}
	return ans;
}

string convertToHex(string binary)
{
	int sum = 0;
	
	reverse(binary.begin(),binary.end());
	for(int i  = 0 ; i < binary.size(); i++)
	{
		if(binary[i] == '1')
		{
			sum += pow(2,i);
		}
	}
	
	if( sum <= 9)
	{
		string s = to_string(sum);	
		return s;
	}
	
	else if (sum == 10)
		return "A";
	
	else if (sum == 11)
		return "B";
		
	else if (sum == 12)
		return "C";
		
	else if (sum == 13)
		return "D";
	
	else if (sum == 14)
		return "E";
		
	else
		return "F";
	
}

int main()
{
	string octal;
	cin>>octal;
	
	string binary = "";

	for(int i = 0; i < octal.size(); i++)
	{
		string temp = convertToBinary(octal[i]);
		binary += temp;
	}
	
	int len = 4 - binary.size() % 4;

	if(len != 4)
		binary.insert(binary.begin(),len,'0');
	
	vector <string> hex;
	
	for(int i = 0; i < binary.size(); i+=4)
	{
		string temp = binary.substr(i,4);
		temp = convertToHex(temp);
		hex.push_back(temp);
	}
	
	string ans = "";
	for(int i = 0; i < hex.size(); i++)
	{
		ans += hex[i];
	}
	
	if(ans[0] == '0')
	{
		int pos = 0;
		
		while(ans[pos] == '0')
		{
			pos++;
		}
		ans.erase(0,pos);
	}
	
	if(ans.size() == 0)
		ans = '0';
	
	cout<<ans<<endl;
	return 0;
}
