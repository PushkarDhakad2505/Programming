//FIBONACCI SERIES
#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,sum=0;
		cin>>n>>k;
		int ar[n];
		for(int i=0;i<n;i++)
			cin>>ar[i];
		for(int i=0;i<n;i++)
		{
			if(ar[i]>k)
			{
				sum=sum+ar[i]-k;
			}
		}
		
		cout<<sum<<endl;
	}
	
	
	return 0;
}
