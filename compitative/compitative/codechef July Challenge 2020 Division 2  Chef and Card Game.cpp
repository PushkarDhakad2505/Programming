#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		int num1,num2,count1=0,count2=0;
		for (int j=0;j<n;j++)
		{
		int sum1=0,sum2=0;
			cin>>num1>>num2;
			
			while(num1)
			{
				int temp=num1%10;
				sum1=sum1+temp;
				num1=num1/10;
			}
			while(num2)
			{
				int temp=num2%10;
				sum2=sum2+temp;
				num2=num2/10;
			}
		
			if(sum1>sum2)
			{
				count1++;
			}
			else if(sum2>sum1)
			{
				count2++;
			}
			else
			{

				count1++;
				count2++;
			}
		}

		if(count1>count2)
			{
				cout<<"0 "<<count1<<endl;
			}
			else if(count2>count1)
			{
				cout<<"1 "<<count2<<endl;
			}
			else
			{
				cout<<"2 "<<count1<<endl;
			}		
		
		
	}
	
	
	
	
	return 0;
}
