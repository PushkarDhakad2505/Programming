#include<iostream>
using namespace std;

int delt(int ar[],int size)
{
	int index;
	for(int i=0;i<size;i++)
	{	
		if(i==size)
		{
			index=i;
			break;
		}
		else if(ar[i]>ar[i+1])
		{
			index=i;
			break;
		}	
		
	}
		
	int sum=0;
	for(int i=0;i<size;i++)
	{
		if(i!=index)
			sum=sum*10+ar[i];
	
	}
	cout<<sum<<endl;
	
	
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int num=n;
		int ar[100]={0};
		int i=0;
		
		while(num)
		{
			ar[i]=num%10;
			num=num/10;
			i++;		
		}
		
		int a[i];
		int k=0;
		for(int j=i-1;j>=0;j--)
		{
			
			a[k]=ar[j];
			k++;
		}
		delt(a,i);
	}
	return 0;
}
