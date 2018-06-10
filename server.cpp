#include <iostream>

using namespace std;

int main()
{
	int num,total;
	
	cin>>num>>total;
	
	int in;
	int ans = 0;
	int hours = 0;
	bool end = false;
	for(int i = 1; i <= num && end == false;i++)
	{
		cin>>in;
		
		if(hours+in <= total)
		{ 
			hours += in;
			ans = i;
		}
		else
			end = true;
		
	}
	
	cout<<ans<<endl;


	return 0;
}
