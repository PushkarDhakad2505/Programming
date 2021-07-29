#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int n=s.length();
		char s1[n];
		char s2[n];
		if(n%2==0)//even
		{
			for(int i=0;i<n/2;i++)
			{
				char a=s[i];
				char a2=s[i+n/2];
				s1[i]=a;
				s2[i]=a2;
			}
//			cout<<s<<endl;
//			for(int i=0;i<n/2;i++)
//				cout<<s1[i];
//			cout<<endl;
//			for(int i=0;i<n/2;i++)
//				cout<<s2[i];
//			cout<<endl;
		}
		else//odd
		{
			for(int i=0;i<n/2;i++)
			{
				char a=s[i];
				s1[i]=a;
			}
			int j=0;
			for(int i=n-1;i>n/2;i--)
			{
				char a1=s[i];
				s2[j]=a1;
				j++;
			}
//			cout<<s<<endl;
//			for(int i=0;i<n/2;i++)
//				cout<<s1[i];
//			cout<<endl;
//			for(int i=0;i<n/2;i++)
//				cout<<s2[i];
//			cout<<endl;
	
		}
	int count1=0;

	for(int i=0;i<n/2;i++)
	{
		int x=count(s1,s1+n/2,s1[i]);
		int y=count(s2,s2+n/2,s1[i]);
		if( x==y )
		{
			count1++;
		}
	}
	
	if(count1==n/2)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

	}
	
	return 0;
}
