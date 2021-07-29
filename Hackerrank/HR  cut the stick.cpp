#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ar[n];
	for (int i=0;i<n;i++)
		cin>>ar[i];
	int min=ar[0];
	for (int i=0;i<n;i++)
	{	min=100;
		for(int m=0;m<n;m++)
		{
			if(ar[m]>0)
				{
					if(ar[m]<min)
					min=ar[m];
				}
		}
		int a[n+20];
			int k=0;
			for(int j=0;j<n;j++)
			{
				if(ar[j]>0)
				{
					ar[j]=ar[j]-min;
					k=k+1;
				}
			//	cout<<ar[j]<<" ";
				
			}//cout<<endl;cout<<"min "<<min<<endl;
			a[i]=k;	
		if (a[i]>0)
			cout<<a[i]<<endl;	
		}
	return 0;
}
