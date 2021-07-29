#include<iostream>
#include<string.h>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char word[1000];
    	cin>>word;
    	char reverse[1000];
    	strcpy(reverse,word);
    	int length=0;
    	for(int i=0;word[i]!='\0';i++)
    		length=length+1;
    
    	for(int i=0;i<length/2;i++)
    	{
    		char temp=word[i];
    		word[i]=word[length-i-1];
    		word[length-i-1]=temp;
    	}
    	cout<<word<<endl;
    	cout<<reverse<<endl;
    	int flag=0;
    	for(int i=0;i<length;i++)
    	{
	    	if(word[i]==reverse[i])
	    	    continue;
	        else
	            flag=1;
	    		
		}
		if(flag==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
    
    	    
    }
	
	return 0;
}
