#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,lead,max=0;
	cin>>t;
	int ar[t],x=0,y=0;
	for (int i=0;i<t;i++)
	{
		int n,m;
		cin>>n>>m;
		if(n>m)
		{
			x++;
			lead=n-m;
			if(lead>max)
				max=lead;
		}
		else
		{
			y++;
			lead=m-n;
			if(lead>max)
				max=lead;
		}

	
	
	}
	cout<<max;
	return 0;
}
