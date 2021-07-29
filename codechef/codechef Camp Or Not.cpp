#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int D;
		cin>>D;
		int arr[40]={0};
		for(int j=0;j<D;j++)
		{
			int d,p;
			cin>>d;
			cin>>arr[d];	
		}
		int q;
		cin>>q;
		for(int j=0;j<q;j++)
		{
			int days,prob,sum=0;
			cin>>days;
			cin>>prob;
			for(int x=0;x<days+1;x++)
			{
				sum=sum+arr[x];
			}
			if(sum>=prob)
				cout<<"Go Camp"<<endl;
			else
				cout<<"Go Sleep"<<endl;
		}
	}
	return 0;
}
