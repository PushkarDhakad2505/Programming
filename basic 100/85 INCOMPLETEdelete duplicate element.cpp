#include<iostream>
using namespace std;
int main()
{
	int n,k=1,x=0,y=0;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++)
		cin>>a[n];
	while(k)	
	{
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<n;j++)			
			{
				if(i!=j)
				{
					//cout<<" i "<<i<<" j "<<j<<" x "<<x<<endl;
					x++;
					if(a[i]==a[j])
					{
						
					//	cout<<i<<" "<<j<<endl;
					cout<<" a[i] "<<a[i]<<" a[j] "<<a[j]<<" y "<<y<<endl;y++;
					//	a[j]=a[j+1];
					}
				}
				else
				{
					//cout<<"df"<<endl;
				}
			}
		}
		k=0;	
	}
		for (int i=0;i<n;i++)
			cout<<a[n];
	return 0;
}
