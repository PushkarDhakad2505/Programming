#include<iostream>
using namespace std;
int main()
{
	int t;
	int n;
	cin>>t;
	int k;
	int arr[n];
	for(int i=0;i<t;i++)
	{
	
		cin>>n;
		int ar[n];
		k=0;
		for(int j=1;j<=n;j++)
		{
			if(n%j==0)
			{
				ar[k]=j;
				k++;
			}	
		}
			if(k%2==0)
				cout<<"NO"<<endl;
			else
				cout<<"YES"<<endl;
		
	//	arr[i]=k;
		
	}
//	
//	for(int i=0;i<t;i++)
//	{
//		if(arr[i!=0])
//		{
//		
//			if(arr[i]%2==0)
//				cout<<"NO"<<endl;
//			else
//				cout<<"YES"<<endl;
//		
//		}
//	}
	return 0;
}
