#include <bits/stdc++.h>

using namespace std;
typedef long double ld;

ld processTime(vector<pair<ld, ld>> v, ld c) 
{
    ld total = 0;
   
    for(auto i : v) 
    {
        total += i.first / (i.second + c);
    }
    
    return total;
}

int main()
{	 

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	long long int n;
	long long int totalTime;
	cin>>n>>totalTime;
	
	vector<pair<ld,ld>> seg;
	ld d,s;
	ld low = 10000000;
	for(long long int i = 0 ; i < n; i++)
	{
		cin>>d>>s;
		seg.push_back(make_pair(d,s));
		
		if(low > s)
			low = s;
	}

	//true speed is always greater than 0
	ld lowerLimit = -low;	

	//should be fine
	ld upperLimit = 1001001;
	ld mid = (lowerLimit+upperLimit)/2.0;
	bool found = false;
	int count = 0;
	
	while(!found && count < 100000)
	{
		ld time = processTime(seg,mid);
		
		//end if off by 10^-6 obtained by guessing
		if(abs(time - totalTime) < 0.0000000001)
		{
			found  = true;
		}
		
		//binary search for new guess
		if(time > totalTime)
		{
			lowerLimit = mid;
		}
		
		if(time < totalTime)
		{
			upperLimit = mid;
		}
		
		mid = (lowerLimit+upperLimit)/2.0;
		count++;
	}
	
	cout<<fixed<<setprecision(8);
	cout<<mid<<endl;
	
	return 0;
}
