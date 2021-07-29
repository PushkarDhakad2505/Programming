#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	char s[22];
	for(long long int i=0;i<n;i++)
	{
		cin>>s[i];
	}
		long long int flag=0;
		long long int count=0,count2=0;
		long long int max_size=0;
		long long int index,position;
		long long int max=0,max2=0;
		for(long long int i=0;i<n;i++)
		{
			//cout<<"flag "<<flag<<endl;
			//cout<<"count "<<count2<<endl;
			if(flag!=0)
			{
				count2++;
				if(count2>max2)
				{
					position=i;
					max2=count2;
				}
				//cout<<endl<<" max"<<count2<<endl;
			}
			if(flag==0)
				count2=0;

			if(flag==0 and s[i]=='2')
			{	
				flag=0;
				count=0;
				continue;
						
			}
			else if(s[i]=='1')
			{
				flag++;	
			}	
			else if(flag!=0 and s[i]=='2')
			{
				flag--;
				count++;
				if(flag+1>max)
					{
						max=flag+1;
						index=i;
					}
			}	
		}
		cout<<max<<" "<<index<<" "<<max2+1<<" "<<(position-max2+1)<<endl;	
	

	return 0;
}

