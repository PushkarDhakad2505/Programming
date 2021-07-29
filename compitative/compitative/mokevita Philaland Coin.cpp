#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,sum=0,min;
		cin>>n;
		for( int i=1;i<=n;i++)
		{
			sum=sum+i;
			if(sum>=n)
			{
				min=i;
				break;
			}
		}
		cout<<min<<endl;	
	}
	
	
	
	return 0;
}
