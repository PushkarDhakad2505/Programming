#include<iostream>
using namespace std;
int palin(int num)
{
	int store=num;
	int sum=0;
	while(num)
	{
		int r=num%10;
		sum=sum*10+r;
		num=num/10;
	}
	if(sum==store)
		return 1;
	else
		return 0;

}
int main()
{
	int t;
	cin>>t;
	for(int i=0; i<t;i++)
	{
	
		int n;
		cin>>n;
		int res=palin(n);
		if(res==1)
			cout<<"wins"<<endl;
		else
			cout<<"loses"<<endl;
	}
	
	
	
	return 0;
}
