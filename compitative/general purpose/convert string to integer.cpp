#include<iostream>
#include<sstream>
using namespace std;
int convert_string_to_int(string a)//used to convert string to integer
{
	stringstream intValue(a);
	int number = 0;
	intValue >> number;
	return number;
}
int main()
{
	string a;
	cin>>a;
	cout<<convert_string_to_int(a);
return 0;
}
