#include<iostream>
using namespace std;
int size,x=0;
int gcd(int a,int b){
	if(b==0)
		return a;
	return gcd(b,a%b);	
}
int flcm(int a[],int n)
{
	int ans=a[0];
	for (int i=1;i<n;i++)
		ans=(a[i]*ans)/(gcd(a[i],ans));
	return ans;
}
int minB(int b[],int m)
{	
	int min=b[0];
	for(int i=0;i<m;i++)
	{
		if(min>b[i])
			min=b[i];
	}
	return min;
}
//int * callcm(int a[],int n,int b[],int m,int ans)
//{
//	size=minB(b,m)/flcm(a,n);
//	int lcmarr[size];
//	for (int i=0;i<size;i++)
//		lcmarr[i]=ans*(i+1);
//	return lcmarr;	
//}
int jitendra(int m,int size,int b[],int lcmarr[])
{ 
	int k=0;
	int newarr[size];
	for (int i=0;i<size;i++)
	{   k=0;
		for(int j=0;j<m;j++)
		{
			if(b[j]%lcmarr[i]==0)
			{
				k++;
			}
		}
		if(k==m)
		{
			
			newarr[i]=lcmarr[i];
			x++;
		}	
	}
//	for(int z=0;z<x;z++)
//		cout<<newarr[z];
cout<<x;
return 0;
}
int main ()
{		
	int n,m,lcm,max;
	cin>>n>>m;
	int a[n],b[m];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<m;i++)
		cin>>b[i];
	int ans=flcm(a,n);
	size=minB(b,m)/flcm(a,n);
	int lcmarr[size];
	for (int i=0;i<size;i++)
		lcmarr[i]=ans*(i+1);	
	jitendra(m,size,b,lcmarr);
}
