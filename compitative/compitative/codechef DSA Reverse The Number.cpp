#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int num;
		cin>>num;
		int sum=0,r;
		while(num)
		{
			r=num%10;
			sum=sum*10+r;
			num=num/10;
		}
		cout<<sum<<endl;
		
	}
	
	
	
	return 0;
}
