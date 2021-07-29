#include<iostream>
using namespace std;
int strong(int);
int factorial(int digit)
{
	int fact=1;
	for(int i=1;i<=digit;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int strong(int num)
{	
	int sum=0;
	int number=num;
	while(num)
	{
		int last_digit=num%10;
		num=num/10;
		sum=sum+factorial(last_digit);
	}
	if(sum==number)
	{
		return 1;
	}
	else
		return 0;
}
int main()
{
	int num;
	cin>>num;
	if(strong(num))
	{
		cout<<"YES";
	}
	else
		cout<<"NO";	
	return 0;
}
