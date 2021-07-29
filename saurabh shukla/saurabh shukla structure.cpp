#include<iostream>
#include<string.h>
void input();
using namespace std;
struct book
{
	int bookid;
	char title[20];
	float price;
	
	
};

int main()
{
	book b1={123,"as jnjkbk njj",12.1};//initialise at the time of initialisation	
	book b2,b3,b4,b;
	
	cout<<b1.bookid;
	cout<<b1.price;
	cout<<b1.title;
	b2.bookid=11;//initialise at the after  initialisation of object
	b2.price=11.11;//initialise at the after  initialisation of object
	strcpy(b2.title," knckdnfjbg ");//initialise at the after  initialisation of object
	b3=b2;//copying 
	cout<<endl;
	cout<<b2.bookid;
	cout<<b2.price;
	cout<<b2.title;
	cout<<endl;
	cout<<b3.bookid;
	cout<<b3.price;
	cout<<b3.title;
	
	
	
	
	
	
	return 0;
}
