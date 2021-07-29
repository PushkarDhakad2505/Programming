#include<iostream>
using namespace std;
int main()
{
	long long int n,k,q;
	cin>>n>>k>>q;
	k=k%n;
	long long int ar[n+k];
	for (long long int i=k;i<n+k;i++)
	{
		cin>>ar[i];
	}
	long long int rev[k];
	long long int j=0;
	for (long long int i=n;i<n+k;i++)
	{
		
		rev[j]=ar[i];
		j++;
	}
	for (long long int i=0;i<k;i++)
	{
		ar[i]=rev[i];
	}
	long long int query;

	for(long long int i=0;i<q;i++)
	{
		cin>>query;
		cout<<ar[query]<<endl;	
	}

	return 0;
}
