#include<iostream>
using namespace std;
int main()
{
	for (int i=0;i<5;i++)
	{		
		int num,dig,sum=0;
		cin>>num;
		while(num)
		{
			dig=num%10;
			num=num/10;
			sum=sum+dig;	
		}
		cout<<sum;
}
	return 0;
}
