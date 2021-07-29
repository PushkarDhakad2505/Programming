#include<iostream>
using namespace std;
int main ()
{
	int n,m,lcm,max;
	cin>>n>>m;
	int a[n],b[m];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<m;i++)
		cin>>b[i];
	max=(a[0]>a[1]?a[0]:a[1]);
	while(1)
	{
		if(max%a[0]==0 && max%a[1]==0)
			{
				lcm=max;
				break;	
			}
			else
			max++;
		
	}
	int min;
	min=(b[0]<b[1]?b[0]:b[1]);
	cout<<lcm<<endl;
	int lcmarray[min/lcm];
	for (int i=0;i<min/lcm;i++)
	{
			lcmarray[i]=lcm*(i+1);
		
		
	}		
	for (int i=0;i<min/lcm;i++)
	{
			cout<<lcmarray[i];
		
		
	}	
	
	
}
