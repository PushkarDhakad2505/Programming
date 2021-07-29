#include<iostream>
using namespace std;
int perfect_num(int num)
{
	int sum=0;
	for(int i=1;i<=num/2;i++)
	{
		if(num%i==0)
			sum=sum+i;
	}
	if(sum==num)
		return 1;
	else
		return 0;

}
int main()
{
	int num;
	cin>>num;
	if(perfect_num(num))
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
