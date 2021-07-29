//heap
#include<bits/stdc++.h>
using namespace std;
int main()
{
	priority_queue<int> maxheap;
	priority_queue<int,vector<int>,greater<int> >minheap;
	int n,a;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		maxheap.push(a);
		minheap.push(a);
	}
	for(int i=0;i<n;i++)
	{
		cout<<maxheap.top()<<" ";
		maxheap.pop();
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<minheap.top()<<" ";
		minheap.pop();
	}	
	
	
	return 0;
}
