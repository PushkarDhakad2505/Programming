#include<iostream>
using namespace std;

string HR_is_string(string str)
{
	int flagh=0,flaga1=0,flagc=0,flagk1=0,flage=0,flagr1=0,flagr2=0,flaga2=0,flagn=0,flagk2=0;//h1 a2 c1 k2 e1 r2 n1 
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='h' and flagh==0)//h
		{
			flagh=1;
		}
		if(str[i]=='a' and flagh==1 and flaga1==0)//a
		{
			flaga1=1;
		}
		if(str[i]=='c' and flagh==1 and flaga1==1 and flagc==0)//c
		{
			flagc=1;
		}
		if(str[i]=='k' and flagh==1 and flaga1==1 and flagc==1 and flagk1==0)//k
		{
			flagk1=1;
		}
		
		if(str[i]=='e' and flagh==1 and flaga1==1 and flagc==1 and flagk1==1 and flage==0)//e
		{
			flage=1;
		}
		if(str[i]=='r' and flagh==1 and flaga1==1 and flagc==1 and flagk1==1 and flage==1 and flagr1==0)//r
		{
			cout<<"dhkvhb";
			flagr1=1;
		}
		int chk=flagh==1 and flaga1==1 and flagc==1 and flagk1==1 and flage==1 and flagr1==1;
	
		if(str[i]=='r' and chk and flagr2==0)//r
		{
			flagr2=1;
		}
	
		if(str[i]=='a' and chk and flagr2==1 and flaga2==0)//a
		{
			flaga2=1;
		}
		
		if(str[i]=='n' and chk and flagr2==1 and  flaga2==1 and flagn==0)//n
		{
			flagn=1;
		}
	
		if(str[i]=='k' and chk and flagr2==1 and flaga2==1 and  flagn==1 and flagk2==0 )//k
		{
			flagk2=1;
		}

	}
	cout<<flagh+flaga1+flagc+flagk1+flage+flagr1+flagr2+flaga2+flagn+flagk2<<endl;
	if(flagh+flaga1+flagc+flagk1+flage+flagr1+flagr2+flaga2+flagn+flagk2==10)
		return "YES";
	else
		return "NO";
}
int main()
{
	int t;
	cin>>t;
	for (int i=0;i<t;i++)
	{
		string str;
		cin>>str;
		cout<<HR_is_string(str)<<endl;
	}	
	return 0;
}
