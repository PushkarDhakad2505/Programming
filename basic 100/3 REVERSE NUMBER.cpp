//reverse a number
#include<iostream>
using namespace std;
int main()
{
	
	int n;
	cin>>n;
	int last,rev=0;
	while(n!=0)
	{
		last=n%10;
		n=n/10;
		rev=rev*10+last;
	}
	cout<<rev;
	
	
	return 0;
}
