//GCD of two number without recursion
#include<iostream>
using namespace std;
int main ()
{
	int m=1;
	for(int i=1;i<5;i++)
	{
		for (int k=1;k<5-i;k++)
		{
			cout<<" ";
			
		}
		for (int j=1;j<=i;j++)
		{
			cout<<"*"<<" ";
			m++;
		}
		cout<<endl;
	}





	return 0;
}
