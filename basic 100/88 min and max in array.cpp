// program for STRONG NUMBER
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],min,max;
	for (int i=0;i<n;i++)
		{
			cin>>a[i];
		}
	min=a[0];
	max=a[0];
	for (int i=0;i<n;i++)
	{
		if(a[i]<min)
			min=a[i];
		if(a[i]>max)
			max=a[i];
	}
cout<<min<<"\t"<<max;

	return 0;
}
