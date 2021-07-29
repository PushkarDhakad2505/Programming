//FIBONACCI SERIES
#include<iostream>
using namespace std;
int main()
{
	int i=0;
	int j=1;
	int n;
	cin>>n;
	if(n==0)
		i=0;
	for (int k=1;k<=n;k++)
	{	
		
		k=i+j;
		i=j;
		j=k;	
	}
	cout<<i;
	
	
	
	return 0;
}
