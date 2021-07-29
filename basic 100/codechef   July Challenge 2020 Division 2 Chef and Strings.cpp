#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int ar[n];
		for(long long int i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		long long int sum=0;
		for(long long int i=0;i<n-1;i++)
		{
			sum=sum+abs(ar[i]-ar[i+1])-1;
		}
		cout<<sum<<endl;
	}
	
	
	
	
	return 0;
}
