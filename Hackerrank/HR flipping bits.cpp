#include<iostream>
using namespace std;
//int binaryToDecimal(int na[]);
int main()
{
	int t;
	unsigned long long int bin[32];
	cin>>t;
	for(int k=0;k<t;k++)
	{
		 unsigned long long int n; 
		 int i;    
		cin>>n;    
		for(i=0; n>0; i++)    
		{    
			bin[i]=n%2;    
			n= n/2;  
		}    
		int j=i-1;
//		for(j;j>=0 ;j--)    
//		{    
//			cout<<"bin "<<bin[j]<<endl;    
//		}    
  		for(int m=0;m<i;m++)
  		{
  			bin[31-m]=bin[i-1-m];	
		}
			
		for(int m=i;m<32;m++)
  		{
  			bin[m]=0;
		}
//	cout<<" I "<<i<<endl;
		for(int m=31;m>=0;m--)
  		{//cout<<" I "<<i<<endl;
  			if(bin[m]==0)
  				bin[m]=1;
  			else
  				bin[m]=0;
		}
//		for(int m=31;m>=0;m--)
//  		{
//  			cout<<bin[m]<<" ";
//		}
		unsigned long long int deci=0;
		unsigned long long int base=1;
		for(int m=31;m>=0;m--)
  		{
  			//cout<<" 0I "<<m<<endl;
  			int last_digi=bin[m];
  			deci=last_digi*base;
  			base=base*2;
		}
		cout<<deci<<endl;
//		int binaryToDecimal(int na[44]) 
//		{ 
//		    int num = na; 
//		    int dec_value = 0; 
//		    int base = 1; 
//		    int temp = num; 
//		    for(int m=31;m>=0;m--)
//			 { 
//		        int last_digit = bin[m];  
//		        dec_value += last_digit * base; 
//		        base = base * 2; 
//		    } 
//		  
//		    return dec_value; 
//		} 
		//cout<<binaryToDecimal(bin);
	}
return 0;
}
