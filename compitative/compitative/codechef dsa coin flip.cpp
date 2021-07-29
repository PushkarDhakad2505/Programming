#include<iostream>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		int g;
		cin>>g;
		int i,n,q;
		for(int j=0;j<g;j++)
		{
			cin>>i>>n>>q;	
			if(n%2==0)//even
			{
				cout<<n/2<<endl;
			}
			else//odd
			{			
				if(i==q)
					cout<<n/2<<endl;
				else
					cout<<(n/2)+1<<endl;	
			}
		}
	
	}
	return 0;
}
