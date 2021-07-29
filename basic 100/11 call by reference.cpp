#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
int main()
{
	int a,b;
	cin>>a>>b;

	cout<<" before swap "<<a<<"\t"<<b;
	swap(&a,&b);
	cout<<" after swap "<<a<<"\t"<<b;
	
	
	
	
	return 0;
}
