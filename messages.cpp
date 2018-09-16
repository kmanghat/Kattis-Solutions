#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

//Sort by ends
bool cmp(const pair<int,int> &lhs,const pair<int,int> &rhs)
{
	return lhs.second < rhs.second;
}
int main()
{
    vector <string> dict;
    string s;
    while(cin >> s && s != "#")
    {
        dict.push_back(s);
    }
    
    string temp = "";
    while(cin >> s && s != "#")
    {
    	vector <pair<int,int>> range;
    	int l = s.size();
    	if(s[l-1] != '|')
    	{
    		temp += s;
    	}
    	else
    	{
    		temp += s;
    		s = temp;
    		temp = "";
  			
  			for(int i = 0 ; i < dict.size(); i++)
  			{
  				size_t f = s.find(dict[i]);
  				
  				while(f != string::npos)
  				{
  					range.push_back({f,f + dict[i].size()-1});
  					f = s.find(dict[i],f+1);
  				}
  			}
  			sort(range.begin(),range.end(),cmp);
  			int count = 0;
  			int currEnd = -1;
  			for(int i = 0; i < range.size(); i++)
  			{
  				if(currEnd < range[i].first)
  				{
  					currEnd = range[i].second;
  					count++;
  				}
  			}
   			cout<< count << endl;
    	}
    }
    return 0;
}
