#include<iostream>
using namespace std;
int main()
{
	int size,page;
	cin>>size>>page;
	int count=0;
	if(size%2==0)//even
	{
		if(page<=size/2)
		{
			//front
			for(int i=2;i<size;i++)
			{
				if(i>page)
				{
					break;
				}
				count=count+1;
				i++;
			}
		}
		else//rear
		{
			for(int i=size-1;i>0;i--)
			{
				if(i<=page)
					break;
				count=count+1;
				i--;
			}
		}
	}
	else//odd
	{
		if(page<=size/2)
		{
			//front
			for(int i=2;i<size;i++)
			{
				if(i>page)
				{
					break;
				}
				count=count+1;
				i++;
			}
		}
		else
		{
			for(int i=size-2;i>0;i--)
			{
				if(i<=page)
					break;
				count=count+1;
				i--;
			}	
				
			
		}	
	}
	cout<<count;
	
	return 0;
}
