#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int ar[n];
		for(int i=0;i<n;i++)
			ar[i]=i+1;
		int max=n;
		int temp=ar[k];
		ar[k]=max;
		ar[n-1]=temp;
		for(int i=0;i<n;i++)
			cout<<ar[i]<<" ";
	}
	return 0;
}
