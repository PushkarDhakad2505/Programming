//GCD of two number without recursion INCOMPLETE
#include<iostream>
using namespace std;
int gcd(int n,int m)
{
	if(m%n==0)
		return n;
	else	
	return gcd(n-1,m);
}
int main ()
{
	int n,m;
	cin>>n>>m;
	cout<<gcd(n,m);
	return 0;
}
