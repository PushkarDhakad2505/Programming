//ceil and floor of an element
#include<iostream>
using namespace std;
int result=-1;
int firstOccurenceBS(int start,int end,int key,int ar[])
{//it will return index
	while(start<=end)
	{
	
		int mid=start+(end-start)/2;
		if(key==ar[mid])
		{
			result=mid;
			end=mid-1;
		}
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
	return result;
}
int lastOccurenceBS(int start,int end,int key,int ar[])
{//it will return index
	while(start<=end)
	{
		int mid=start+(end-start)/2;
		if(key==ar[mid])
		{
			result=mid;
			start=mid+1;
		}
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
	return result;
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
	cout<<"enter element to find its first and last occurence ";
	cin>>key;
	int start=0;
	int end=n-1;
	cout<<firstOccurenceBS(start,end,key,ar);
	start=0;
	end=n-1;
	cout<<endl;
	cout<<lastOccurenceBS(start,end,key,ar);

	return 0;
}
