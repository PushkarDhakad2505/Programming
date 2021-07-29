//37 41 40 33
#include<iostream>
using namespace std;
int main()
{
	int n;
	float sum=0.0;
	cin>>n;
	for(float i=1;i<n+1;i++)
	{
		sum=sum+(1.0/i);
	}
	cout<<sum;
	return 0;
}
