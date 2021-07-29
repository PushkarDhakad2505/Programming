//heap kth smallest element
#include<bits/stdc++.h>
using namespace std;
int main()
{
	priority_queue<int,vector<int>,greater<int> >minheap;
	priority_queue<int> maxheap;
	int n,a;
	cin>>n;
	int k;
	cin>>k;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		maxheap.push(a);
		minheap.push(a);
		if(i>=k)
		{
			maxheap.pop();
			minheap.pop();
			
		}
	}
	cout<<k<<"th smallest "<<maxheap.top()<<endl;
	cout<<k<<"th largest "<<minheap.top()<<endl;

	
	return 0;
}
