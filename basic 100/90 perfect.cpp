// program for PERFECT NUMBER
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int sum=0;
	for(int i=1;i<=n/2;i++)
	{	
		if(n%i==0)
			sum=sum+i;
		
	}
	if(sum==n)
		cout<<"perfect";
	else	
		cout<<"not perfect";	
	
	return 0;
}
