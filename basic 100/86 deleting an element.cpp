//deleting an element
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	cout<<"enter array:"<<endl;
	for(int i=0; i<n;i++)
		cin>>a[i];
	int pos;
	cout<<"enter position"<<endl;
	cin>>pos;	
	for (int i=pos;i<n;i++)
		a[i]=a[i+1];	
	for(int i=0; i<n-1;i++)
		cout<<a[i]<<" ";
	return 0;
}
