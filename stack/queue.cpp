#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{
	int n;
	cin>>n;
	queue<int> q;
	for (int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		int x;
		
		if(type==1)
		{
			cin>>x;
			q.push(x);
		}
		else if(type==2)
		{
			q.pop();
		}
		else
		{
			cout<<q.front()<<endl;
		}		
	}
	return 0;
}
