//47 students
#include<iostream>
using namespace std;
class students
{
	private:
		int roll;
		string name;
		float marks;
	public:
		void setData(int r, string n,float m)
		{
			roll=r;
			name=n;
			marks=m;
		}
		void showData()
		{
			cout<<roll<<" "<<name<<" "<<marks<<endl;
		}
		int calAvg(students r,students m,students s)
		{
			float avg=(r.marks+m.marks+s.marks)/3;
			return avg;
		}
		void topper()
		{
			for(int i=0;i<3;i++)
			{
				if()
			}
		}
};
int main()
{
	students rohan,mohan,sohan;
	
	rohan.setData(2,"rohan",33.2);
	mohan.setData(3,"mohan",83.2);
	sohan.setData(4,"sohan",65.2);
	
	float avg= rohan.calAvg(rohan,mohan,sohan);
	cout<<avg;
	return 0;
}
