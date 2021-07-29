#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		int result[b],size=0;
		int lower=ceil(sqrt(a));
		int upper=floor(sqrt(b));
		cout<<upper-lower+1<<endl;

	}

	return 0;
}
