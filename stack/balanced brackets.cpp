#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		stack<int> s;
		string str;
	//cout<<"t"<<endl;
		cin>>str;
		for(int i=0;i<str.length();i++)
		{
			//cout<<"t2"<<endl;
			if(str[i]=='{' or str[i]=='(' or str[i]=='[')
				s.push(str[i]);	
			else if(str[i]=='}' or str[i]==')' or str[i]==']')
			{
				//cout<<"t3"<<endl;
				if(s.size()>0)
				{
					if(str[i]=='}' and s.top()=='{')
					{
						//cout<<"t4"<<endl;
						s.pop();			
					}
					else if(str[i]==']' and s.top()=='[')
					{
						s.pop();			
					}
					else if(str[i]==')' and s.top()=='(')
					{
						s.pop();			
					}
					else
					{
						cout<<"NO"<<endl;
						break;
					}
				}
					
			}
			else
			{
				cout<<"NO"<<endl;
				break;
				
			}	
		}	
		if(s.size()==0)
			cout<<"YES"<<endl;
	}
	return 0;
}
