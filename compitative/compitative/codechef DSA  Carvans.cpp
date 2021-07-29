#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ar[n];
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		int maxspeed=ar[0];

		int count=0;
		for(int i=0;i<n;i++)
		{
			if(ar[i]<=maxspeed)
			{
				count++;
		
				maxspeed=ar[i];
			}
		}
		cout<<count<<endl;
	}
	
	
	return 0;
}
