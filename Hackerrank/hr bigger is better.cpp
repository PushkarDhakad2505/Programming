#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        long long int n=str.size();
        int flag=0;
        long long int index;
        for(long long int i=n-1;i>0;i--)
        {
        	if(flag==1)
                break;
            for(long long int j=i-1;j>=0;j--)
            {
            	if(flag==1)
                    break;
                if(str[i]>str[j])
                {
                    flag=1;
                    char temp=str[i];
                    str[i]=str[j];
                    str[j]=temp;
                    index=j;
					break;
                }
                if(flag==1)
                    break;
            }
                if(flag==1)
                    break;
        }
        char strarr[n];
        
        for(long long int i=0;i<n;i++)
        {
        	strarr[i]=str[i];	
		}
        if(flag==1)
        {
        	//cout<<index;
        	sort(strarr+index+1,strarr+n);
        	for(long long int i=0;i<n;i++)
	        {
	        	cout<<strarr[i];	
			}
        	cout<<endl;
		}
        else
        {
            cout<<"no answer"<<endl;
        }   
    }
    return 0;
}

