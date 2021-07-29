#include<sstream>
#include<iostream>
using namespace std;
int main()
{	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str[n];
		for(int i=0;i<n;i++)
			cin>>str[i];
		int num1[n];
		for(int i=0;i<n;i++)
		{	 
			stringstream geek(str[i]);
			int num = 0; 
    		geek >> num;
			int val=0,base=1;
			while(num)
			{
				int last=num%10;
				num=num/10;
				val=val+last*base;
				base=base*2;
			}
			num1[i]=val;
		}
		for(int i=1;i<n;i++)
			num1[0]=num1[0] ^ num1[i];
		int y=num1[0];		 
	    int binaryNum[32];  
	    int i = 0; 
		while (y > 0) 
		{ 
	    	binaryNum[i] = y % 2; 
	        y = y / 2; 
     	    i++; 
		} 
		int count=0;
	 	for(int i=0;i<10;i++)
		{
	 		if(binaryNum[i]==1)
	 			count++;
		}
		cout<<count<<endl;
	}
	return 0;
} 
