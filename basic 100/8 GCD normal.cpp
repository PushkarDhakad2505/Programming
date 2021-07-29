//GCD of two number without recursion
#include<iostream>
using namespace std;
int main ()
{
	int n,m,gcd;
	cin>>n;
	cin>>m;
	for(int i=1;i<=n;i++)
	{	
		if(n%i==0 and m%i==0)
			gcd=i;
	}
	cout<<gcd;
	
	return 0;
	
	
}
