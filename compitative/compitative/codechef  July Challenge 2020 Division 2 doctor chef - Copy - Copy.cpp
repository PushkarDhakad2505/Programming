#include<bits/stdc++.h>
#include <algorithm>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		 int n;
		 int x;
		cin>>n>>x;
		int ar[n];
		vector <int> v11;
		vector <int > v22;
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
			if(ar[i]>=x)
				v11.push_back(ar[i]);
			else
				v22.push_back(ar[i]);
		}
		sort(v11.begin(),v11.end());
		sort(v22.begin(),v22.end(),greater<int>());
		for(int i=0;i<v22.size();i++)
		{
			v11.push_back(v22[i]);
		}

		 int day=0;
		 int a=0;
		while(1)
		{	
			if(a>=n)
				break;
			if(v11[a]>x)
			{
				x=x*2;
				day++;
			}
			else if(v11[a]==x)
			{
				x=x*2;
				day++;
				a++;

			}
			else// (arr[a]<x)
			{
				x=v11[a]*2;
	
				day++;
				a++;

			}
		}
		cout<<day<<endl;	
	}
	return 0;
}
