#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

struct Disjointset
{
private:
	//store node and group of each node
	struct node;
	struct group;
	
	//store value of the node and the group that it belongs to
	struct node
	{
		group *parent;
		ll value;
	};
	
	//store parent of each group size and sum of that group
	struct group
	{
		group *parent;
		ll sum,size;
	};
	
	//vector storing each group and node
	vector<group> groups;
	vector<node> nodes;
	
	group* find(ll x)
	{
		group *temp = nodes[x].parent;
		while( temp != temp->parent)
		{
			temp = temp->parent;
		}
		
		nodes[x].parent = temp;
		return temp;
	}
	
public:
	Disjointset(ll n)
	{
		nodes.resize(n+1);
		groups.resize(n+1);
		
		for(ll i = 1; i <= n; i++)
		{
			nodes[i].value = i;
			nodes[i].parent = &groups[i]; 
			groups[i].parent = &groups[i];
			groups[i].sum = i;
			groups[i].size = 1;
		}
	}
	
	void unite(ll x, ll y)
	{
		group *groupx = find(x), *groupy = find(y);
		
		if(groupx == groupy)
			return;
		
		if(groupx->size > groupy->size)
		{
			groupx->sum += groupy->sum;
			groupx->size += groupy->size;
			
			groupy->sum = 0;
			groupy->size = 0;
			groupy->parent = groupx;
		}
		else
		{
			groupy->sum += groupx->sum;
			groupy->size += groupx->size;
			
			groupx->sum = 0;
			groupx->size = 0;
			groupx->parent = groupy;
		}
	}
	
	void move(ll x, ll y)
	{
		group *groupx = find(x), *groupy = find(y);
		
		if(groupx == groupy)
			return;
		
		groupx->sum -= x;
		groupy->sum += x;
		
		groupx->size--;
		groupy->size++;
		
		nodes[x].parent = groupy;
	}
	
	void print(ll n)
	{
		group *group = find(n);
		cout<<group->size<<" "<<group->sum<<endl;
	}
};
int main()
{
	ll n,k;
	while(cin>>n>>k)
	{
		Disjointset ds(n);
		while(k--)
		{
			ll op;
			cin>>op;
		
			ll a,b;
			if(op == 1)
			{
				cin>>a>>b;
				ds.unite(a,b);
			}
			else if(op == 2)
			{
				cin>>a>>b;
				ds.move(a,b);
			}
			else
			{
				cin>>a;
				ds.print(a);
			}
		
		}
			
	}

	return 0;
}
