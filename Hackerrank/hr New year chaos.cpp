#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int flag=0;
		int n;
		cin>>n;
		int ar[n];
		int sorted_ar[n];
		int sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		int index;
		for (int i=0;i<n;i++)
		{
			int min=ar[i];
			for(int j=i;j<n;j++)
			{
				if(min>ar[j])
				{
					min=ar[j];
					index=j;
				}
				else if(min==ar[i])
				{
					min=ar[i];
					index=i;
				}
			}
			
			int temp=ar[index];
			ar[index]=ar[i];
			ar[i]=temp;
			cout<<" abs "<<abs(i-index)<<endl;
			if((abs(i-index)+1)>2)
			{
				flag=1;
			}
			else
			{
				sum=sum+abs(i-index);
			}

		}
		if(flag==1)
			cout<<"Too chaotic"<<endl;
		else
			cout<<sum<<endl;
	}
	return 0;
}
