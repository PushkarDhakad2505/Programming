#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,lead,max=0;
	cin>>t;
	int ar[t];
	for (int i=0;i<t;i++)
	{
		int n,m,max=0;
		cin>>n>>m;
		lead=n-m;
		ar[i]=lead;
	}
	for (int i=0;i<t;i++)
	{
		if(abs(ar[i])>abs(max))
			max=ar[i];
	}
	if(max>0)
		cout<<"1"<<" "<<abs(max);
	else
		cout<<"2"<<" "<<abs(max);
	return 0;
}
