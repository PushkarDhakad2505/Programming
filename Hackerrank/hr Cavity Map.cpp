#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int convert_string_to_int(string a)//used to convert string to integer
{
	stringstream intValue(a);
	int number = 0;
	intValue >> number;
	return number;
}
int main()
{
	int n;
	cin>>n;
	int ar[n][n];
	for(int i=0;i<n;i++)
	{
		cin>>str;
		int x=convert_string_to_int(str);
		int j=n-1;
		while(x)
		{		
			int last=x%10;
			
			ar[i][j]=last;
				
			
			
		}
	//	}	
	}
	for(int i=1;i<n-1;i++)
	{
		for(int j=1;j<n-1;j++)
		{
			if(ar[i][j] >ar[i][j-1] and ar[i][j] >ar[i][j+1])
			{
				ar[i][j]=0;	
			} 
		}
		
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(ar[i][j]==0)
			{
				cout<<"X";
				continue;
			}
			cout<<ar[i][j]<<"";
		}
		cout<<endl;
	}
	
	
	
	
	return 0;
}
