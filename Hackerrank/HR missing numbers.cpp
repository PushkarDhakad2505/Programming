#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	int arr[n];
	for (int i=0;i<n;i++)
		cin>>arr[i];
	cin>>m;
	int brr[m];
	for (int i=0;i<m;i++)
		cin>>brr[i];
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
				if(arr[i]==brr[j])
				{
					for (int k=j;k<m;k++)
					{
							brr[k]=brr[k+1];
							
					}
						m=m-1;
					break;		
				}
		}continue;
	}
	sort(brr,brr+m);
	for (int i=0;i<m;i++)
		cout<<brr[i]<<" ";
	return 0;
}
