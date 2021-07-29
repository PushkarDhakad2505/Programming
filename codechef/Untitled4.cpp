#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cout<<"hs";
		int n;
		cin>>n;
		int ar[n];
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
		}
	int count=1;
	int max=0;
	for (int i=0;i<n;i++)
	{
		count=1;
		for(int j=0;j<n;j++)
		{
			if(ar[i]==ar[j])
			{
				if(i==j)
					continue;
				count++;
				if(i==j+1 or i==j-1)
				{
				
					count--;
					continue;
				}
			}
		}
		cout<<count<<" ";
	}
	}
	
	return 0;
}
