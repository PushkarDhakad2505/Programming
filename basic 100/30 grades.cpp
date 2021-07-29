#include<iostream>
using namespace std;
int main()
{
	int marks;
	for (int i=0;i<5;i++)
	{
		
		cin >>marks;
		if(marks>=60)
			cout<<"FIRST"<<endl;
		else if(marks<60 and marks>=50)
			cout<<"SECOND"<<endl;
		else if(marks<50 and marks>=40)
			cout<<"THIRD";
		else
			cout<<"FAILED";
	}
	
	
	
	
	
	
	
	return 0;
}
