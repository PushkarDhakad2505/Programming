//< 60  ||| > 62
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int flag=0;
		int count=0;
		int max=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[0]=='>')
				break;
			if(flag==0 and s[i]=='>')
			{	
				flag=0;
				count=0;
				continue;
						
			}
			else if(s[i]=='<')
			{
				flag++;	
			}	
			else if(flag!=0 and s[i]=='>')
			{
				flag--;
				count++;
				if(count>max)
					max=count;
			}	
		}
		cout<<max*2<<endl;		
	}

	return 0;
}
