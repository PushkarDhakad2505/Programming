#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str,lstr,rstr;
		cin>>str;
		int flag=0;
		char left,right;
		int count=0;
		for(int i=0;str[i]!='\0';i++)
			count++;	
		if(count<=2)
			flag=1;
		else 
		{
			left=str[0];
			right=str[count-1];
			lstr=str;
			rstr=str;
			//right rotation
			for(int i=count;i>=0;i--)
			{
				rstr[i+1]=rstr[i];	
			}	
			rstr[0]=right;	
			//left rotation
			for(int i=0;i<count;i++)
			{
				lstr[i-1]=lstr[i];	
			}	
			lstr[count-1]=left;
			if(lstr==rstr)
				flag=1;
			else
				flag=0;	
	 }
	 if(flag)
	 	cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	}
	return 0;
}
