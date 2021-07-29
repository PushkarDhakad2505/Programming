#include<iostream>
#include<string>
#include<algorithm>
long long int dividetwo(long long int);
long long int dividefive(long long int);
long long int count2,count5;
long long int dividetwo(long long int n)
{	
//	if(n%32==0)
//	{
//		count2=count2+5;
//		n=n/32;
//		dividetwo(n);
//	}
	if(n%16==0)
	{
		count2=count2+4;
		n=n/16;
		dividetwo(n);
	}
	else if(n%8==0)
	{
		count2=count2+3;
		n=n/8;
		dividetwo(n);
	}
	else if(n%4==0)
	{
		count2=count2+2;
		n=n/4;
		dividetwo(n);
	}
	else if(n%2==0)
	{
		count2++;
		n=n/2;
		dividetwo(n);
	}
	else
		return count2;
}
long long int dividefive(long long int n)
{	
//	if(n%625==0)
//	{
//		count5=count5+4;
//		n=n/625;
//		dividefive(n);
//	
//	}
//	else if(n%125==0)
//	{
//		count5=count5+3;
//		n=n/125;
//		dividefive(n);
//	
//	}
	if(n%25==0)
	{
		count5=count5+2;
		n=n/25;
		dividefive(n);
	}	
	else if(n%5==0)
	{
		count5++;
		n=n/5;
		dividefive(n);
	}
	else
		return count5;
}
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		count2=0;
		count5=0;
		long long int num;
		cin>>num;
		long long int fin2,fin5;
		long long int flag2=0;
		long long int flag5=0;
		while(num)
		{

			//cout<<"num "<<num<<endl;
			if(num%2==0)
			{	
				flag2=1;
				fin2=dividetwo(num);
			}
			if(num%5==0)
			{
				flag5=1;
				fin5=dividefive(num);
			}
			num--;
		}
		if(flag5==1 and flag2==1)
		{
			if(fin2<fin5)
			{
				cout<<fin2<<endl;
			}
			else
				cout<<fin5<<endl;
		}
		else
			cout<<0<<endl;
		
	}
	return 0;
}
