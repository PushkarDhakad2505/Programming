#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	
	while(t--)
	{
		int n;
		cin>>n;
		char ar[8][8];
		for(int i=0;i<8;i++)
		{
			for(int j=0;j<8;j++)
			{
				ar[i][j]='X';
			}
			
		}
		ar[0][0]='O';
//		for(int i=0;i<8;i++)
//		{
//			for(int j=0;j<8;j++)
//			{
//				cout<<ar[i][j];
//			}
//			cout<<endl;
//		}
		int count=1;
		for(int i=0;i<8;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i==0 and j==0)
					continue;
				if(count==n)
					break;
				ar[i][j]='.';
				count++;	
					
			}
		}
		
		for(int i=0;i<8;i++)
		{
			for(int j=0;j<8;j++)
			{
				cout<<ar[i][j];
			}
			cout<<endl;
		}
	}
	return 0;
}
