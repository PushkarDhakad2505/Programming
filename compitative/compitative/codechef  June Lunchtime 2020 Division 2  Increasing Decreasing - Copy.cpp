#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ar [n];
		int count=0;
		int max=0;
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(ar[i]==ar[j])
				{
					count++;
				}	
			}
//			if(count>=3)
//			{
//					cout<<"NO"<<endl;
//					break;
//			}
		
		}
		max=ar[0];
		for(int i=0;i<n;i++)
		{
			if(ar[i]>max)
				max=ar[i];
		}	
		int countmax=0;
		for(int i=0;i<n;i++)
		{
			if(ar[i]==max)
				countmax++;
	
		}	
		if(countmax>=2 or count>=3)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	}
}
