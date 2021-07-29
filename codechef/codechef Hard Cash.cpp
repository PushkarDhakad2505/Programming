#include<iostream>
using namespace std;
int sum(int arr[],int size,int k)
{
	int sum=0;
	for(int i=0;i<size;i++)
		sum=sum+arr[i]%k;
	return sum%k;
}
int main()
{
	int t;
	cin>>t;
	for(int i=0; i<t;i++)
	{
		int n,k;
		cin>>n>>k;
		int arr[n];
		for(int j=0;j<n;j++)
			cin>>arr[j];
		int res=sum(arr,n,k);
		cout<<res<<endl;
	}	
	return 0;
}
