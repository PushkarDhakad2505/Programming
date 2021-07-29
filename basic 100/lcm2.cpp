#include<iostream>
using namespace std;
int lcm(int num1,int num2)
{
	int lt;
	if(num1>=num2)//num1 is greater
		lt=num2;
	else
		lt=num1;
		
		for(int i=1;i<lt;i++)
		{
			if(num1%i==0 and num2%i==0)
			lt=i;
		}
	return num1*num2/lt;		
		
		
}
int main()
{

		int num1,num2;
		cin>>num1>>num2;

		cout<<lcm(num1,num2)<<endl;
	
		
	
	
	
	return 0;
}
