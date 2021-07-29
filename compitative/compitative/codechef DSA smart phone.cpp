#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int ar[n];
	for(long long int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	sort(ar,ar+n);

	long long int max=ar[0]*(n);
	for (long long int i=0;i<n;i++)
	{
		if(max<(ar[i]*(n-i)))
		{
			max=ar[i]*(n-i);
		}
	}
	cout<<max<<endl;
	return 0;
}
