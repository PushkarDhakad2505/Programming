#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char word[100];
	char reverse[100];
	gets(word);
	int length=0;
	for(int i=0;word[i]!='\0';i++)
		length=length+1;
	//*******1st approach******
	//for(int i=0;i<length;i++)
	//	strrev(word);
	//	cout<<word;
	//*******2st approach******
	//	for(int i=0;i<length;i++)
	//	{
	//			reverse[i]=word[length-i-1];
	//	}
	//	cout<<reverse;
//	//*******3st approach******
//	for(int i=0;i<length/2;i++)
//	{
//		char temp=word[i];
//		word[i]=word[length-i-1];
//		word[length-i-1]=temp;
//	}
//	cout<<word;
	
	
	return 0;
}
