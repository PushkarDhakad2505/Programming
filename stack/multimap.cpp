#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{
	int n;
	cin>>n;
	multimap<string ,int> mp;
	for (int i=0;i<n;i++)
	{	
		string name;
		int score;
		cin>>name>>score;
		mp.insert(pair<string,int>(name,score));
	
	
	}		
	for(multimap<string,int>::iterator i=mp.begin();i!=mp.end();i++)
	{
		cout<<i->first<<"  "<<i->second<<endl;
	}
			

	return 0;
}
