//binery search in an descending sorted array
#include<iostream>
using namespace std;
int mid;
int binerySearch(int start,int end,int ar[],int key)
{
	while(start<=end)
	{
		mid=start+(end-start)/2;
		if(key==ar[mid])
			return mid;
		else
		{
			if(key>ar[mid])
			{
				end=mid-1;
			}
			else if(key<ar[mid])
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
	for (int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	int key;
	cin>>key;
	int start=0;
	int end=n-1;
	cout<<binerySearch(start,end,ar,key);
	return 0;
}
