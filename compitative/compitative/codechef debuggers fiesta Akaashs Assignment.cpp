#include<iostream>
using namespace std;
int power(int n,int k)
{
	int x=1;
	for(int i=0;i<k;i++)
	{
		x=x*n;
	}
	return x;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int lower=power(n,k);
		int upper=power(n+1,k);
		cout<<upper-lower<<endl;	
	}
	return 0;
}
