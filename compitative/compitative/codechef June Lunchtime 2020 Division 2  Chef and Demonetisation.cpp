#include<iostream>
using namespace std;
int count=0;
int sIsGTn(int ,int );
int sLessThenN(int ,int );

int sLessThenN(int s,int n)
{
	if(s%2==0 or s==1)//even s
	{
		return 1;
	}
	else//odd s
	{
		return 2;
	}

}
int sIsGTn(int s,int n)
{
	int rem=s%n;
		
	 count=count+s/n;
	s=rem;
	if(s<n)
	{
		
		return count+sLessThenN(s, n);	
	}
	else
		sIsGTn(s,n);
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		count=0;
		int s,n;
		cin>>s>>n;
		if((s%n)==0)
		{
			cout<<s/n<<endl;
		}
		
		else if(s<n)
		{
			cout<<sLessThenN(s,n)<<endl;			
		}
		else //(s>n)
		{
			cout<<sIsGTn(s,n)<<endl;
		}
	}
	return 0;
}
