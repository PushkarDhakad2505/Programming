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
		int n=str.size();
		int flag=0;
		for(int i=n-1;i>0;i--)
		{
			for(int j=i-1;j>=0;j--)
			{
				if(str[i]>str[j])
				{
					flag=1;
					char temp=str[i];
					str[i]=str[j];
					str[j]=temp;
					break;
				}
				if(flag==1)
					break;
			}
				if(flag==1)
					break;
		}
		if(flag==1)
		{
			cout<<str<<endl;
		}
		else
		{
			cout<<"no answer"<<endl;
		}
		
		
	}
	
	
	
	return 0;
}
