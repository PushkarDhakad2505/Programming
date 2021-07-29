#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string dict[n];
    
    
    for (int i=0;i<n;i++)
    {
        cin>>dict[i];
    }
    int q;
    cin>>q;
    string query[n];
    for (int i=0;i<q;i++)
    {
        cin>>query[i];
    }
    
	int iDict[n];
    int iQuery[q];
    
    
    
    for(int i=0;i<n;i++)
    {
    	int sum=0;
        for(int j=0;dict[i][j]!='\0';j++)
        	{
        		sum=sum+int(dict[i][j]);
			}
			iDict[i]=sum;
    }
    
    
    
    for(int i=0;i<q;i++)
    {
    	int sum=0;
        for(int j=0;query[i][j]!='\0';j++)
        	{
        		sum=sum+int(query[i][j]);
			}
			iQuery[i]=sum;
    }

	for(int i=0;i<q;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(iQuery[i]==iDict[j])
                count++;
        }
        cout<<count<<endl;
	}
    return 0;
}

