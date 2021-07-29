//FIBONACCI SERIES
#include<iostream>
using namespace std;
int main()
{
	int n,m,c;
	cin>>n;
	int x[n],y[n],p[n];
	cin>>m>>c;
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
		cin>>y[i];
		cin>>p[i];	
	}
	int sumUp=0,sumDown=0;
	for(int i=0;i<n;i++)
	{
		if(m*x[i]+c>y[i])
			sumUp=sumUp+p[i];
		else
			sumDown=sumDown+p[i];	
	}
	if(sumUp>sumDown)
		cout<<sumUp;
	else
		cout<<sumDown;
	
	
	
	return 0;
}
