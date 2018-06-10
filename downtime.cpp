#include <bits/stdc++.h>

using namespace std;

int main()
{
	double n,k;
	cin>>n>>k;
	
	int task;
	vector<int> start,end;
	
	queue<int> tasks;
	double size = 0;
	for(int i = 0; i < n; i++)
	{
		cin>>task;
		
		while(tasks.front()+1000 <= task && !tasks.empty())
		{
			tasks.pop();
		}
		tasks.push(task);
		
		if(tasks.size() > size)
			size = tasks.size();
		
	}
	
	cout<<ceil(size/k)<<endl;
	
	return 0;
}
