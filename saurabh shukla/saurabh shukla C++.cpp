#include<iostream>
using namespace std;
class area
{
	public:
	int l,b,h,area;
	set_dimension()
	{		
		cout<<"length : ";
		cin>>l;
		cout<<"bredth : ";
		cin>>b;
		cout<<"height : ";
		cin>>h;
	}
	cal_area()
	{	
		area=l*b*h;
	}
	show_area()
	{
		cout<<" area is : "<<area;
	}
};
int main()
{
	area cube;
	cube.set_dimension();
	cube.cal_area();
	cube.show_area();
	return 0;
}
