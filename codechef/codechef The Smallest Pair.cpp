#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int j=0;j<t;j++)
	{
		int n;
		cin>>n;
		int ar[n];
		for (int i=0;i<n;i++)
			cin>>ar[i];
		if(n==2)
			cout<<ar[0]+ar[1]<<endl;
		else
		{
		
			sort(ar,ar+n);
			cout<<(ar[0]+ar[1])<<endl;	
		}
	}
	return 0;
}
