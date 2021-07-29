#include <bits/stdc++.h>
using namespace std;
int main() {
	//code
	int t;
	cin>>t;
	for(int x=0;x<t;x++)
	{
		
	    char  str[1000];
	    gets(str);
	    int length=0;
	    for(int i=0;str[i]!='\0';i++)
	    {
	        length++;
	    }
	    for(int i=0;i<length;i++)
	    {
	        if(str[i]==' ')
	        {
	            str[i+1]=str[i+1]-32;
	        }
	    }
	    cout<<str<<endl;
	}
	return 0;
}
