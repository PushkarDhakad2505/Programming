#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int g[n],a[n],b[n];
		for(int i=0;i<n;i++)
		{
			cin>>g[i]>>a[i]>>b[i];
		}
		int sumA=0;
		int sumB=0;
		for(int i=0;i<n;i++)
		{
			sumA=sumA+g[i]*b[i]/(a[i]+b[i]);
			sumB=sumB+g[i]*a[i]/(a[i]+b[i]);
		}
		cout<<sumA<<".00000"<<" ";
		cout<<sumB<<".00000"<<endl;
	}
return 0;
}
