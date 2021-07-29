//Maximum Area of Histogram
#include<iostream>
#include<stack>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
vector<int> NSL(int,int);
vector<int> NSR(int ,int );
int MAH(vector<int >vNSR,vector<int >vNSL,int arr[],int n)
{	
	int amax=0;
	int max=0;
	int width[n];
	for(int i=0;i<n;i++)
	{	
		width[i]=vNSR[i]-vNSL[i]-1;
		
		int amin=min(arr[i],width[i]);
		//amax=max(amin,amax);
		if(amax<amin)
		{
			amax=amin;
		}
		//int area=arr[i]*width[i];
		//if(area>max)
		//	max=area;	
	}	
	return amax;
}

vector<int> NSL(int arr[],int n)
{
	stack<pair<int,int> > s;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		if(s.size()==0)
			v.push_back(-1);
		else if(s.size()>0 && s.top().first<arr[i])
			v.push_back(s.top().second);
		else if(s.size()>0 && s.top().first>=arr[i])
		{
			while(s.size()>0 && s.top().first>=arr[i])
				s.pop();		
			if(s.size()==0)
				v.push_back(-1);
			else
				v.push_back(s.top().second);
		}
		s.push({arr[i],i});
	}
	return v;
}

vector<int> NSR(int arr[],int n)
{
	stack<pair<int,int> > s;
	vector<int> v;
	for(int i=n-1;i>=0;i--)
	{
		if(s.size()==0)
			v.push_back(n);
		else if(s.size()>0 && s.top().first<arr[i])
			v.push_back(s.top().second);
		else if(s.size()>0 && s.top().first>=arr[i])
		{
			while(s.size()>0 && s.top().first>=arr[i])
				s.pop();
			if(s.size()==0)
				v.push_back(n);
			else
				v.push_back(s.top().second);
		}
		s.push({arr[i],i});
	}
	reverse(v.begin(), v.end());
	return v;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for (int i=0;i<n;i++)
		cin>>arr[i];
	vector<int >vNSR=NSR(arr,n);
	vector<int >vNSL=NSL(arr,n);	
	cout<<MAH(vNSR,vNSL,arr,n);
	return 0;
}











