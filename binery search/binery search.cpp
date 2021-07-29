//binery search ascending
#include<iostream>
using namespace std;
int mid;
int binerySearch(int start,int end,int key,int ar[])
{//it will return index
	while(start<=end)
	{
	
		int mid=start+(end-start)/2;
		if(key==ar[mid])
			return mid;
		else
		{
			if(key<ar[mid])
			{
				end=mid-1;
			}
			else if(key>ar[mid])
			{
				start=mid+1;
			}
			}
	}
	return -1;
}
int main()
{
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	int key;
	cout<<"enter element to search ";
	cin>>key;
	int start=0;
	int end=n-1;
	cout<<binerySearch(start,end,key,ar);
	
	return 0;
}
