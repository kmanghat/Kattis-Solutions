#include <bits/stdc++.h>

using namespace std;

int main()
{
	int size;
	
	while(cin >> size)
	{
		stack<int> s;
		queue<int> q;
		priority_queue<int> pq;
		
		bool st,qu,prq;
		st = true; qu = true; prq = true;
		
		for(int i = 0; i < size; i++)
		{
			int act,num;
			cin>>act>>num;
			
			if(act == 1)
			{
				s.push(num);
				q.push(num);
				pq.push(num);
			}
			else
			{
				if(s.empty())
					st = false;
					
				if(q.empty())
					qu = false;
				
				if(pq.empty())
					prq =false;
					
				if(st)
				{
					if(s.top() == num)
						s.pop();
						
					else
						st = false;
				}
				
				if(qu)
				{
					if(q.front() == num)
						q.pop();
					
					else
						qu = false;
				}
				
				if(prq)
				{
					if(pq.top() == num)
						pq.pop();
						
					else
						prq = false;
						
				}
			}	
		
		}
	
		if(!prq && !qu && !st)
			cout<<"impossible"<<endl;
			
		else if(prq && !qu && !st)
			cout<<"priority queue"<<endl;
			
		else if(!prq && qu && !st)
			cout<<"queue"<<endl;
				
		else if(!prq && !qu && st)
			cout<<"stack"<<endl;
				
		else
			cout<<"not sure"<<endl;
	
	}
	
	
	return 0;

}
