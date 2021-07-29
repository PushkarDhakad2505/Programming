#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;
int main()
{
	int n1,n2;
	cin>>n1>>n2;
	int arr1[10000]={0};
	int arr2[100000];
	for(int i=n1;i<n2;i++)
	{
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
				break;
			else
			{
				arr1[i]=i;
				break;
			}		
		}
		cout<<arr1[i]<<" ";
	}
	return 0;
}
