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
		int ar[n];
		for (int i=0;i<n;i++)
			cin>>ar[i];
			int max=0;
		for(int i=0;i<n;i++)
			{
				int count=0;
				for(int j=0;j<n;j++)
				{
					if(ar[i]==ar[j])
						count++;
				}
				if(count>max)
					max=count;
			}
	cout<<max;
	}
	return 0;
}
