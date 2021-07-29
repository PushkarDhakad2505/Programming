#include<iostream>
using namespace std;
int armstrong(int num)
{
	int x=num;
	int sum=0;
	while(num)
	{
		int rem=num%10;
		sum=sum+rem*rem*rem;
		num=num/10;
	}
	cout<<"sum "<<sum<<endl;
	if(sum==x)
		return 1;
	else
		return 0;
}
int main()
{
	int t;
	cin>>t;
	for (int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		int res=armstrong(n);
		if(res)
			cout<<"armstrong"<<endl;
		else
			cout<<"not Armstrong"<<endl;
		
	}
	
	
	
	
	
	return 0;
}
