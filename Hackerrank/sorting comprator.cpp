//heap
#include<bits/stdc++.h>
using namespace std;
int main()
{
	priority_queue<multimap<string ,int> > maxheap;
	int n,score;
	string name;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>name;
		cin>>score;
		maxheap.push(make_pair(name,score));
	}
	for(int i=0;i<n;i++)
	{
		cout<<maxheap.top()<<" ";
		maxheap.pop();
	}

	return 0;
}
