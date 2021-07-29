//xyxxy
#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,count=0;
		cin>>n;
		int ar[n];
		for (int i=0;i<n;i++)
			cin>>ar[i];
		for (int i=0;i<n;i++)
		{	
			count=0;
			int init=i;
			while(ar[i+2]-ar[i]==2)
			{
				count++;
				i++;
			}
			int fin=i;
			if(count>0)
				cout<<ar[init]<<"..."<<ar[fin+1]<<",,";
			if(i+2<n and ar[i+2]!=ar[init] )
				cout<<ar[i+2]<<",";
		}	
	}
	return 0;
}

