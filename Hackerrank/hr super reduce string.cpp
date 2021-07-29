#include<iostream>
#include<stack>
using namespace std;
int Super_reduced_string(string str,int len)
{
	stack <int > stk;
	for(int i=0;i<len;i++)
	{
		if(stk.size()==0)//stack empty
		{
			stk.push(str[i]);
		}
		else//not empty
		{
			if(stk.top()==str[i])
			{
				stk.pop();
			}
			else
			{
				stk.push(str[i]);
			}
		}
	}
	int len_stk=stk.size();
	char ar[len_stk];
	if(len_stk>0)
	{
		for(int j=0;j<len_stk;j++)
		{
			ar[j]=stk.top();
			stk.pop();
		}
		for(int j=len_stk-1;j>-1;j--)
		{
			cout<<ar[j];
		}cout<<endl;
		
		
	}
	else
		cout<<"Empty String"<<endl;
	return 0;
	
	
	
	
	
}
int main()
{
	string str;
	cin>>str;
	int len=0;
	for(int i=0;str[i]!='\0';i++)
		len++;
	Super_reduced_string(str,len);
}
