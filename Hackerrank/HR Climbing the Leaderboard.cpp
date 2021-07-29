#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	int score[n];
	for (int i=0;i<n;i++)
		cin>>score[i];
	cin>>m;
	int alice[m];
	for (int i=0;i<m;i++)
		cin>>alice[i];
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			if(i==j)
				continue;
			if(score[i]==score[j])
				{
					n=n-1;
					for(int k=i;k<n;k++)
						score[k]=score[k+1];
				}
		}	
	}
		
	
	for (int i=0;i<n-1;i++)
	{
		int counter=1;
		for (int j=0;j<n;j++)
		{
			if(alice[i]<score[j])
			{
				counter++;
			
			}			
			
		}
		cout<<counter<<endl;
	}
	
	
	
	
	
	
	return 0;
	
}
