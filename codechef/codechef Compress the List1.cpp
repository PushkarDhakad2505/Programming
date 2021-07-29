//xyxxy
#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,count=0,count2=0;
		cin>>n;
		int ar[n];
		for (int i=0;i<n;i++)
			cin>>ar[i];
		for (int i=0;i<n;i++)
		{	
			count=0;
			int init=i,digi;
			while(ar[i+2]-ar[i]==2)
			{
				count++;
				i++;
			}
			cout<<"ab"<<i<<endl;
			int fin=i;
			if(count>0)
			{
				cout<<ar[init]<<"..."<<ar[fin+1]<<",,";
				digi=fin+2-init;
			}
			count2=0;
//			while(ar[i+1]-ar[i]!=1 and ar[i]!='\0')
//			{	
//				count2++;
//				i++;
//			}
//			cout<<"ad "<<i<<endl;
//			cout<<"count 2"<<count2;
//			
			
			
			
			
			
			
			
			
			//cout<<"digi "<<digi;
//			if(count==0)
//			{		
//				for(int j=;j<digi;j++)
//				{
//					if(ar[i]==ar[j])
//						cout<<ar[i]<<",";
//			
//				}
//			}
			
			
		}	
		cout<<endl;
	}
	return 0;
}

