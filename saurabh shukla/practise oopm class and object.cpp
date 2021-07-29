#include<iostream>
using namespace std;
class student
{
	public:
	 int rollnum;
	int set_roll_num()
	{
		cin>>rollnum;
		return 0;
	}
	int get_roll_num()
	{
		cout<<rollnum;
		return 0;
	}
		
};
int main()
{

	student s1;
	s1.set_roll_num();
	s1.get_roll_num();
	
	
	
	
	
	
	return 0;
}
