#include<bits/stdc++.h>
using namespace std;
long long int min(long long int x,long long int y)
{
	if(x>y)
		return y;
	return x;
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long int a[n],b[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			cin>>b[i];
		sort(a,a+n);
		sort(b,b+n);
		long long int sum=0;
		for(int i=0;i<n;i++)
		{
			long long int x=a[i];
			long long int y=b[i];
			sum=sum+min(x,y);
		}
		cout<<sum<<endl;
	}	
	return 0;
}
