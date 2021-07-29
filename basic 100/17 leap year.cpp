#include<iostream>
using namespace std;
int main()
{
	int year;
	for (int i=0;i<5;i++)
	{
		cin>>year;
		if(year%400==0)
			cout<<"leap year"<<endl;
		else if(year%4==0 and year%100!=0)
			cout<<"leap year";
		else
			cout<<"non leap year";
			
	}
	return 0;
}
