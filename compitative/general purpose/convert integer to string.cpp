#include <iostream>  
#include<sstream>  
using namespace std;  
string convert_integer_to_string(int number)
{
	  
	string str; 
	stringstream temp;  
	temp<<number;  
	temp>>str;
	return str;
}
int main()
{  
	int number;  
	cin>>number;  
	cout<<convert_integer_to_string(number);
}  
