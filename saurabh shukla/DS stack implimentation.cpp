//stack implimentation
#include<iostream>
using namespace std;
int i=-1;
int num,n;
int is_full();
int is_empty();
int push_stk(int stk[])
{
	if(is_full())
		cout<<"stack is full"<<endl;
	else
	{
		i++;
		cin>>num;
		stk[i]=num;	
	}
}
int pop_stk( )
{
	if(is_empty())
		cout<<"stack is empty"<<endl;
	else
		i--;
}
int top_stk(int stk[])
{
		if(is_empty())
			cout<<"stack is empty"<<endl;
		else
			cout<<stk[i]<<endl;
}
is_empty()
{
	if(i==-1)
		return 1;
	else
		return 0;
}
is_full()
{
	if(i==n-1)
		return 1;
	else
		return 0;
}
int traverse(int stk[])
{
	for (int k=0;k<i;k++)
	{
		cout<<stk[k]<<endl;;	
	}
}
int main()
{
	cout<<"enter size"<<endl;
	cin>>n;
	int stk[n];
	while(1)
	{
		int ch;
		cout<<"1 push"<<endl;
		cout<<"2 pop"<<endl;
		cout<<"3 peek"<<endl;
		cout<<"4 traverse"<<endl;
		cout<<"5 is empty"<<endl;
		cout<<"6 is full"<<endl;
		cout<<"7 EXIT"<<endl;
		cout<<"enter your choice"<<endl;
		cin>>ch;
	if(ch==1)
		push_stk(stk);
	else if(ch==2)	
		pop_stk();
	else if(ch==3)
		top_stk(stk);
	else if(ch==4)
		traverse(stk);
	else if(ch==5)
		is_empty();	
	else if(ch==6)
		is_full();	
	else if(ch==7)
		exit(0);
	else
		cout<<"enter valid number"<<endl; 
	}

	return 0;
}
