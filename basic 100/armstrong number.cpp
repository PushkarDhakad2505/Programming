#include<iostream>
using namespace std;
int armstrong_num(int num)
{
	int sum=0;
	int number=num;
	while(num)
	{
		int last_digit=num%10;
		num=num/10;
		sum=sum+last_digit*last_digit*last_digit;
	}
	if(sum==number)
		return 1;
	else
		return 0;	
}
int main()
{
	int num;
	cin>>num;
	if(armstrong_num(num))
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
