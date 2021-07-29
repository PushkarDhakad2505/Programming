#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int sum=0;
		for(int i=0;i<n;i++)
		{
			sum=sum+a[i];
		}
		int avg=sum/n;
		if(avg*n==sum)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	
	
	
	
	return 0;
}
