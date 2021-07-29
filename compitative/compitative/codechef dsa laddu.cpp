#include<iostream>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		int n,laddu;
		cin>>n;
		string origin;
		cin>>origin;
		laddu=0;
		while(n--)
		{
			string type;
			cin>>type;
			if(type=="CONTEST_WON")
			{
				int rank;
				cin>>rank;
				if( rank<20)
					laddu=laddu+300+20-rank;
				else
					laddu=laddu+300;
			}
			else if(type=="TOP_CONTRIBUTOR")
			{
				laddu=laddu+300;
			}
			else if(type== "BUG_FOUND")
			{
				int severity;
				cin>>severity;
				laddu=laddu+severity;
			}
			else if(type== "CONTEST_HOSTED")
			{
				laddu=laddu+50;	
			}			
		}
		if(origin=="INDIAN")
			cout<<laddu/200<<endl;
		else
			cout<<laddu/400<<endl;
		
	}
	
	return 0;
}

