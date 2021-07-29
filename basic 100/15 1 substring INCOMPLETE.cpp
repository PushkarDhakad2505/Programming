#include<iostream>
using namespace std;
char insertString(char gString,char iString,int position)
{
	for (int i=0;i<lengthGS+lengthIS;i++)
	{
		if(i==position)
		{
			gString[i]=iString;		
		}
	}	

	
	
}
int main()
{ int i=0;
	char gString[]="pushr";
	char iString[]="ka";
	int position=3;
	for (i=0;gString[i]!='\0';i++);
		int lengthGS=i;
	for (i=0;iString[i]!='\0';i++);
		int lengthIS=i;
		
	insertString(gString[lengthGS],iString[lengthIS],position);
	
	
	
	return 0;
}
