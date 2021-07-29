#include<iostream>
using namespace std;
int lcm(int num1,int num2)
{
	int gt;
	if(num1>=num2)//num1 is greater
		gt=num1;
	else
		gt=num2;
	while(1)
	{
		if(gt%num1==0 and gt%num2==0)
		{		
			break;
		}
		gt++;
	}	
		
				
	return gt;
}
int main()
{

		int num1,num2;
		cin>>num1>>num2;

		cout<<lcm(num1,num2);
	
		
	
	
	
	return 0;
}
