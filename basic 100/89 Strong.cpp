// program for STRONG NUMBER
#include<iostream>
using namespace std;
int factorial(int i)
{cout<<"hh";
	if(i==1)
		return 1;
	if(i==0)
		return 1;
	
	return i*factorial(i-1);
}
int main()
{
	int n;
	cin>>n;
	int k=n,i;
	int sum=0;
	while(k)
	{	
		i=k%10;
		k=k/10;
		sum=sum+factorial(i);
	}
	if(sum==n)
		cout<<"Strong";
	else	
		cout<<"not strong";	
	
	return 0;
}
