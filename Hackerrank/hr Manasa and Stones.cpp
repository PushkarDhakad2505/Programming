#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		int n,a,b;
		cin>>n>>a>>b;
		int ar[n][n-1];
		for(int i=0;i<n;i++)
		{ 
			int l=0;
			for(int j=n-2-i;j>=0;j--)
			{
				ar[i][l]=a;
				l++;
			}
			for(int j=0;j<i;j++)
			{
				ar[i][l]=b;
				l++;
			}
		}
	set <int, greater <int> > set_sum;
	int sum_ar[n];
	
			for(int i=0;i<n;i++)
			{ 
				int sum=0;
				for(int j=0;j<n-1;j++)
				{
					sum=sum+ar[i][j];
				}
				set_sum.insert(sum);				
			}	
		int x=0;
		set <int, greater <int> > :: iterator i; 
		for(i=set_sum.begin();i!=set_sum.end();i++)
		{
			sum_ar[x]=*i;
			x++;
		}
		sort(sum_ar,sum_ar+x);
		for(int i=0;i<x;i++)
		{
			cout<<sum_ar[i]<<" ";
		}cout<<endl;
	}
	return 0;
}
