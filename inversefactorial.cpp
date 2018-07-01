#include <bits/stdc++.h>

using namespace std;

int main()
{
	string factorial;
	cin>>factorial;
	
	//For numbers less than equal to 6!
	if(factorial.size() <= 3)
	{
		int num = stoi(factorial);
		
		//Predefined
		if(num == 1)
			cout<<"1"<<endl;
		
		if(num == 2)
			cout<<"2"<<endl;
		
		if(num == 6)
			cout<<"3"<<endl;
		
		if(num == 24)
			cout<<"4"<<endl;
		
		if(num == 120)
			cout<<"5"<<endl;
		
		if(num == 720)
			cout<<"6"<<endl;
	}
	
	//For large numbers
	else
	{
		double digits = 1;
		bool found = false;
		int nextNum = 1;
		while(!found)
		{
			//Sum up logs of consecutive numbers
			//log(1) + log(2) + log(3)....+log(x)
			digits +=log10(nextNum);
			
			//floor digits gives number of digits in a number
			if(floor(digits) == factorial.size())
				found = true;
			
			nextNum++;
		}
		
		cout<<nextNum-1<<endl;
	}

	return 0;
}
