#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ar[6][6];
	for (int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			cin>>ar[i][j];		
		}
	}
	int n=6;
//	for (int k=0;k<n-2;k++)
//	{
//		for(int i=k;i<k+3;i++)
//		{
//			for (int j=0;j<n-3;j++)
//			{
//				cout<<ar[i][j]<<" ";
//			}cout<<endl;
//		}cout<<endl;	
//	}
	for(int x=0;x<n-2;x++)
	{
		for (int k=0;k<n-2;k++)
		{
			for(int i=k;i<k+3;i++)
			{
				for (int j=0;j<n-3;j++)
				{
					cout<<ar[i][j]<<" ";
				}cout<<endl;
			}cout<<endl;	
		}
	}
	
	
	
	
	return 0;
}
