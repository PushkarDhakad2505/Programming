#include<iostream>
using namespace std;
int min,index,sum;
int mini(int ar[],int num)
{
	int min=ar[0];
	for(int i=0;i<num;i++)
	{
		if(min>=ar[i])
		{
			min=ar[i];
			index=i;
		}
	}
	if(index==0)
	{
		sum=sum+1;
		return sum;
	}
	else
		sum=sum+min*num;
	num=index;
	for(int i=0;i<num;i++)
	{
		ar[i]=ar[i]-min;
	}
	if(index==0)
		return sum;
	if(num>0)
		return mini(ar,index);
	return sum ;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ar[n];
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		sum=0;
		int result=mini(ar,n);
		cout<<result<<endl;
	
	}
	return 0;
}
