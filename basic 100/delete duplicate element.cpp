#include<iostream>
using namespace std;




int main()
{
	int n,k=1;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++)
		cin>>a[n];
	while(k)	
	{
		for (int i=0;i<n;i++)
		{
			for (int j=i;j<n;j++)			
			{
				if(i!=j)
				{
					if(a[i]==a[j])
					{
						cout<<(i!=j)<<endl;
						a[j]=a[j+1];
					}
				}
				else{cout<<"df";
				}
			}
		}
		k=0;	
	}
		for (int i=0;i<n;i++)
		cout<<a[n];
	return 0;
}
