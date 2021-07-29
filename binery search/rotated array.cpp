//binery search ascending
#include<iostream>
using namespace std;
int mid;
int rotatedArray(int start,int end,int ar[],int n)
{//it will return index
	while(start<=end)
	{
		int mid=start+(end-start)/2;
		int next=(mid+1)%n;
		int prev=(mid+n-1)%n;		
		if(end<start)
			return 0;
		if(end==start)
			return start;
		if(mid<end  and ar[mid]>ar[next])
			return mid+1;
		if(mid>start  and ar[mid]<ar[prev])
			return mid;
		else
		{
			if(ar[start]<=mid)
			{
				start=mid+1;
			}	
			else if(ar[mid]<=ar[end])
			{
				end=mid-1;
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
	int start=0;
	int end=n-1;
	cout<<rotatedArray(start,end,ar,n);
	
	return 0;
}
