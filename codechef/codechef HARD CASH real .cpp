#include<iostream>
using namespace std;
int sum(long long int arr[],long long int size, long long int k)
{
	long long int sum=0;
	for(int i=0;i<size;i++)
		sum=sum+(arr[i]%k);
	return sum%k;
}
int main()
{
	int t;
	cin>>t;
	for(int i=0; i<t;i++)
	{
		 long long int n,k;
		cin>>n>>k;
		long long int arr[n];
		for(int j=0;j<n;j++)
			cin>>arr[j];
		int res=sum(arr,n,k);
		cout<<res<<endl;
	}	
	return 0;
}
