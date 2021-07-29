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
		for(int i=1;i<n+1;i++)
		{
			for(int j=1;j<i+1;j++)
					cout<<j;
			for(int j=0;j<(2*n)-2*i;j++)
				cout<<" ";
			for(int j=i;j>0;j--)
				cout<<j;
			cout<<endl;
		}
		
	}
	return 0;
}
