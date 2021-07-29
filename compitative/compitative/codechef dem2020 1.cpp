//heap
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		priority_queue<int> maxheap;
		int n,a;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			maxheap.push(a);
		}
		if(maxheap.size()<2)
		{
			cout<<"first";
			continue;
		}
		int flag=0;
		int flag1=1;
		int sum1=0,sum2=0;
		while(maxheap.size()!=0)
		{
			if(flag1==1)
			{
				sum1=sum1+maxheap.top();
				flag1=0;
			}
			else
			{
				if(flag==0)
				{
					flag=1;
					sum2=sum2+maxheap.top();
					maxheap.pop();
				}
				sum2=sum2+maxheap.top();
				flag1=1;
			}
			maxheap.pop();
		}
		if(sum1>sum2)
			cout<<"first"<<endl;
		else if(sum1<sum2)
			cout<<"second"<<endl;
		else if(sum1==sum2)
			cout<<"draw"<<endl;
	}
	return 0;
}
