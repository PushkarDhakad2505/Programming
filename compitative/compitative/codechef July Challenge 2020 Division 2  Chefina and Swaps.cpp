#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ar[n];
		int br[n];
		for(int i=0;i<n;i++)
		{	
			cin>>ar[i];
			cin>>br[i];
		}
		
		for(int i=0;i<n;i++)
		{
			if((ar.count(ar[i])+br.count(br[i]))%2!=0)
			{
				cout<<"-1"<<endl;
				break;
			}
				}		
		
		
	}
	
	
	
	return 0;
}
//1 2 2
//1 3 3
//1 2 3
//1 2 3
//
//
//if sum of count of a num in both array is odd than -1
//
//
//4 5 4 8 4 4    4 has to go down
//7 7 5 8 8 8     7->2   8->2
//
//
//1 1    1->2
//2 2    2->2


