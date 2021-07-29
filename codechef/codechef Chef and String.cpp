//xyxxy
#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		cout<<str;
		int x=0,z=0;
		char val='0';
		for (int i=0;str[i]!='\0';i++)
		{
			if( (str[i]=='x' and str[i+1]=='y') or (str[i]=='y' and str[i+1]=='x') )
				{
					x++;
					i++;
				}
		}
	cout<<x<<endl;
	
	}
	return 0;
}

