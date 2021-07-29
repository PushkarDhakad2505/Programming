//stack smaller to left
#include<bits/stdc++.h>
using namespace std;
vector<int> SpanNGL(int arr[],int n)
{
	stack<pair<int,int> > s;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		if(s.size()==0)
			v.push_back(-1);
		else if(s.size()>0 && s.top().first>arr[i])
			v.push_back(s.top().second);
		else if(s.size()>0 && s.top().first<arr[i])
		{
			while(s.size()>0 && s.top().first<arr[i])
				s.pop();	
				
			if(s.size()==0)
				v.push_back(-1);
			else
				v.push_back(s.top().second);
		}
		s.push({arr[i],i});
	}
	//return v
	//rigth now we have index Of NGL in V but we want span so
	for(int i=0;i<n;i++)
		v[i]=i-v[i];
	return v;
}
int main()
{

	int n;
	cin>>n;
	int arr[n];
	for (int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	vector<int> v=SpanNGL(arr,n);
	for (int i=0;i<n;i++)
		cout<<v[i]<<" ";
	return 0;
}
		
