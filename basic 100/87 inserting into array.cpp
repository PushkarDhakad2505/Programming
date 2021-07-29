//inserting an element
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+1];
	cout<<"enter array:"<<endl;
	for(int i=0; i<n;i++)
		cin>>a[i];
	int num,pos;
	cout<<"enter no and position"<<endl;
	cin>>num>>pos;	
	for (int i=n+1;i>=pos;i--)
		a[i]=a[i-1];
	a[pos]=num;	
	for(int i=0; i<n+1;i++)
		cout<<a[i]<<" ";
	return 0;
}
