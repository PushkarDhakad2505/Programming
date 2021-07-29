#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string str;
	cin>>str;
	stack <int> s;
	int count=0;
	
	for (int i=0;i<n;i++)
	{
		if(str[i]=='U')
		{
			if(s.empty())
				s.push('U');	
			else if(s.top()=='U')
				s.push('U');
			else if(s.top()=='D')
			{
				s.pop();
				if(s.empty())
					count=count+1;
			}
		}
		else
		{
			if(s.empty())
				s.push('D');
			else if(s.top()=='U')
				s.pop();
			else if(s.top()=='D')
				s.push('D');
		}	
	}
	cout<<count;
	return 0;
}
