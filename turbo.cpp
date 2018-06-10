#include <bits/stdc++.h>

using namespace std;

int getSum(int BIT[], int idx)
{
	int sum = 0;
	for(int i = idx; i > 0; i -= i&-i)
		sum += BIT[i];
		
	return sum;
}
void update(int BIT[],int val, int idx)
{
	for(int i = idx; i < 100001; i += i &-i)
	{
		BIT[i] += val;	
	} 
}

int swaps(int left, int right,int BIT[])
{
	return getSum(BIT,right) - getSum(BIT,left);
}

int main()
{
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int size;
	cin>>size;
	
	int arr[1000000];
	int num; 
	for(int i = 1; i <= size;i++)
	{
		cin>>num;
		arr[num] = i;
	}
	
	
	int BIT[100000];
	memset(BIT, 0, sizeof(size));
	
	
	for(int i = 1; i <= size; i++)
		update(BIT,1,i);
	
		
	int min = 1;
	int max = size;
	
	cout<<"BIT ";
	for(int i = 1; i <= size; i++)
			cout<<BIT[i]<<" ";
	cout<<endl;
	for(int i = 1 ; i <= size; i++)
	{
		if(i % 2 == 0)
		{
			cout<<"The array is: ";
			for(int i = 1; i <= size; i++)
				cout<<arr[i]<<" ";
				
			cout<<"MAX "<<arr[max]<<endl;
			cout<<"MIN "<<arr[min]<<endl;
			update(BIT,-1,arr[max]);
			
			cout<<"BIT after -1 :";
			for(int i = 1; i <= size; i++)
				cout<<BIT[i]<<" ";
				
			cout<<"\n swaps: "<<swaps(arr[max],size,BIT)<<endl;
			
			max--;
			cout<<"\n\n";
		}
		else
		{
			cout<<"The array is: ";
			for(int i = 1; i <= size; i++)
				cout<<arr[i]<<" ";
			cout<<"MAX "<<arr[max]<<endl;
			cout<<"MIN "<<arr[min]<<endl;
			update(BIT,-1,arr[min]);
			
			cout<<"BIT after -1 :";
			for(int i = 1; i <= size; i++)
				cout<<BIT[i]<<" ";
		
			cout<<"\n swaps: "<<swaps(0,arr[min],BIT)<<endl;
			
			min++;
			cout<<"\n\n";
		}
	}

	return 0;
}
