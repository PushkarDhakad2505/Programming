#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,X,Y,s;
		cin>>n>>m>>X>>Y>>s;
		int x[X];
		int y[Y];
		for(int i=0;i<X;i++)
			cin>>x[i];
		for(int i=0;i<Y;i++)
			cin>>y[i];
		int ar[n][n]={0};
		for(int i=0;i<X;i++)
		{
			int z=x[i];
			for(int j=0;j<n;j++)
			{
				ar[z][j]=1;
				
			}
		}
		for(int i=0;i<X;i++)
		{
			int z=y[i];
			for(int j=0;j<m;j++)
			{
				ar[z][j]=1;
				
			}
		}
		
		
		
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<ar[i][j]<<" ";
			}
			cout<<endl;
		}
		
		
		
		
	}
	
	return 0;
}
