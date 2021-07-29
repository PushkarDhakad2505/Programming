#include<iostream>
using namespace std;
int max(int ar[],int size)
{
	int maxNum=ar[0];
	for(int i=0;i<size;i++)
	{
		if(ar[i]>maxNum)
			maxNum=ar[i];
	}
	return maxNum;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<max(arr,n);
	return 0;
}
