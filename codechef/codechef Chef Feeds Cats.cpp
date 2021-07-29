#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,count=0;
		cin>>n>>m;
		int ar[m];
		int x=n,z=1;
		for(int i=0;i<m;i++)
			cin>>ar[i];
		for(int i=0;i<m;i++)
		{	
			x=n;
			if(i>=n)
			{
				z=(i)/n;
				x=x*z+n;
			}
			for (int j=i+1;j<x;j++)
			{	
				if(ar[i]==ar[j])
					count++;	
			}		
		}
		if(count==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
