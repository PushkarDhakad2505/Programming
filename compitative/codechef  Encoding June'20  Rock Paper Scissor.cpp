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
		char a[n],b[n],c[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i]>>b[i]>>c[i];			
		}
		int sum1=0,sum2=0,sum3=0;
		for(int i=0;i<n;i++)
		{	
			if(a[i]=='R')
			{
			
				if(b[i]=='R')
				{
					if(c[i]=='R')
					{
						sum1=sum1+0;
						sum2=sum2+0;
						sum3=sum3+0;
					}
					else if(c[i]=='P')
					{
						
						sum1=sum1-1;
						sum2=sum2-1;
						sum3=sum3+2;
					}
					else
					{	
						sum1=sum1+1;
						sum2=sum2+1;
						sum3=sum3-2;
					}
				}
				else if(b[i]=='P')
				{
					if(c[i]=='R')
					{
						sum1=sum1-1;
						sum2=sum2+2;
						sum3=sum3-1;
					}
					else if(c[i]=='P')
					{
						sum1=sum1-2;
						sum2=sum2+1;
						sum3=sum3+1;
					}
					else
					{	
						sum1=sum1+0;
						sum2=sum2+0;
						sum3=sum3+0;
					}
				}
				
				else
				{
					if(c[i]=='R')
					{
						sum1=sum1+1;
						sum2=sum2-2;
						sum3=sum3+1;
					}
					else if(c[i]=='P')
					{
						sum1=sum1+0;
						sum2=sum2+0;
						sum3=sum3+0;
					}
					else
					{	
						sum1=sum1+2;
						sum2=sum2-1;
						sum3=sum3-1;
					}
				}
			}
			
			
			//a[i]=P
			
			else if(a[i]=='P')
			{
				if(b[i]=='R')
				{
					if(c[i]=='R')
					{
						sum1=sum1+2;
						sum2=sum2-1;
						sum3=sum3-1;
					}
					else if(c[i]=='P')
					{
						sum1=sum1+1;
						sum2=sum2-2;
						sum3=sum3+1;
					}
					else
					{	
						sum1=sum1+0;
						sum2=sum2+0;
						sum3=sum3+0;
					}
					
					
					
				}
				else if(b[i]=='P')
				{
					if(c[i]=='R')
					{
						sum1=sum1+1;
						sum2=sum2+1;
						sum3=sum3-2;
					}
					else if(c[i]=='P')
					{
						sum1=sum1+0;
						sum2=sum2+0;
						sum3=sum3+0;
					}
					else
					{	
						sum1=sum1-1;
						sum2=sum2-1;
						sum3=sum3+2;
					}
				}
				
				else
				{
					if(c[i]=='R')
					{
						sum1=sum1+0;
						sum2=sum2+0;
						sum3=sum3+0;
					}
					else if(c[i]=='P')
					{
						sum1=sum1-1;
						sum2=sum2+2;
						sum3=sum3-1;
					}
					else
					{	
						sum1=sum1-2;
						sum2=sum2+1;
						sum3=sum3+1;
					}
				}
			}
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			//a[i]=S
			else
			{
				if(b[i]=='R')
				{
					if(c[i]=='R')
					{
						sum1=sum1-2;
						sum2=sum2+1;
						sum3=sum3+1;
					}
					else if(c[i]=='P')
					{
						sum1=sum1+0;
						sum2=sum2+0;
						sum3=sum3+0;
					}
					else
					{	
						sum1=sum1-1;
						sum2=sum2+2;
						sum3=sum3-1;
					}
					
					
					
				}
				else if(b[i]=='P')
				{
					if(c[i]=='R')
					{
						sum1=sum1+0;
						sum2=sum2+0;
						sum3=sum3+0;
					}
					else if(c[i]=='P')
					{
						sum1=sum1+2;
						sum2=sum2-1;
						sum3=sum3-1;
					}
					else
					{	
						sum1=sum1+1;
						sum2=sum2-2;
						sum3=sum3+1;
					}
				}
				
				else
				{
					if(c[i]=='R')
					{
						sum1=sum1-1;
						sum2=sum2-1;
						sum3=sum3+2;
					}
					else if(c[i]=='P')
					{
						sum1=sum1+1;
						sum2=sum2+1;
						sum3=sum3-2;
					}
					else
					{	
						sum1=sum1+0;
						sum2=sum2+0;
						sum3=sum3+0;
					}
				}
			}
		
		
		
		}
		cout<<sum1<<" "<<sum2<<" "<<sum3<<endl;
	}
	return 0;
}
