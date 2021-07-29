#include<iostream>
using namespace std;
int main()
{
	char a[100];
	cin>>a;
	int k=0;
	for (int i=0;i<100;i++)
	{
		if(a[i]=='\0')
			break;
		else
		k++;
	}
	int j=0;
	cout<<endl;
	cout<<"length of string:-"<<k<<endl;
	for (int i=0;i<k;i++)
	{
	if(a[i]==a[k-i-1])
		{
			j++;	
		}	
	}
	if(k==j)
	cout<<"palindrom";
	else
	cout<<"not palindrom";
	return 0;
}
