#include<iostream>
using namespace std;
int main()
{
	int t,n,k;
	cin>>t;
	for (int i=0;i<t;i++)
	{
		cin>>n>>k;
		int ar[n],count=0;
		for(int j=0;j<n;j++)
			cin>>ar[j];
		for(int j=0;j<n;j++)
		{
			if(ar[j]<k)
			{
				cout<<"NO "<<j+1<<endl;
				break;
			}
			else
			{
				ar[j+1]=ar[j+1]+ar[j]-k;
				count++;
			}
			if(count==n)
				cout<<"YES"<<endl;
		}	
	}
	return 0;
}
