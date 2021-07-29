#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	for (int j=0;j<T;j++)
	{
		int n;
		cin>>n;
		int counter=0;
		for(int i=2;i<=n/2;i++)
		{
			if(n%i==0)
			{
				counter++;
			}
		}
		if(counter!=0)
			cout<<"non prime no "<<endl;	
		else
			cout<<"prime no "<<endl;
	}
	
	
	return 0;
}
