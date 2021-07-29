#include<iostream>
using namespace std;
class complex
{
	int a,b;
	public:
	void setData(int x,int y)
	{
		a=x;
		b=y;
	}
	void showData()
	{
		cout<<" a: "<<a<<" b: "<<b<<endl;
	}
	complex add(complex c)
	{ 
		complex temp;
		temp.a=a+c.a;
		temp.b=b+c.b;
		return temp;
	}
	complex sub(complex c)
	{ 
		complex temp;
		temp.a=a-c.a;
		temp.b=b-c.b;
		return temp;
	}
	complex mul(complex c)
	{ 
		complex temp;
		temp.a=a*c.a;
		temp.b=b*c.b;
		return temp;
	}
	complex div(complex c)
	{ 
		complex temp;
		temp.a=a/c.a;
		temp.b=b/c.b;
		return temp;
	}
	
};
int main()
{
	complex c1,c2,c3;
	int x,y,x1,y1;
	cout<<"enter two num : ";
	cin>>x>>y;
	cout<<"enter  another two num : ";
	cin>>x1>>y1;
	
	c1.setData(x,y);
	c2.setData(x1,y1);
	cout<<"addition"<<endl;
	c3= c1.add(c2);
	c3.showData();
	cout<<"subtracion"<<endl;
	c3= c1.sub(c2);
	c3.showData();
	cout<<"multiplication"<<endl;
	c3= c1.mul(c2);
	c3.showData();
	cout<<"division"<<endl;
	c3= c1.div(c2);
	c3.showData();
	
	return 0;
}
