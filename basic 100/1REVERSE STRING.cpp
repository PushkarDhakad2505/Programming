//REVERSE A STRING
#include<iostream>
using namespace std;
int main()
{
	char a[100]="this string need to be reversed";
	
	cout<<"original string:-"<<a<<endl;
	int k=0;
	for (int i=0;i<100;i++)
	{
		if(a[i]=='\0')
			break;
		else
		k++;
	}
	cout<<endl;
	cout<<"length of string:-"<<k<<endl;
	cout<<"reversed string:-";
	for (int i=k;i>=0;i--)
	{
		cout<<a[i];
	}
	return 0;
}
