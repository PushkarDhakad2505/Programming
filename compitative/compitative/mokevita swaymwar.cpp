#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string groom,bride;
	cin>>bride;
	cin>>groom;
	int select=0;
	int bride_quantity=n;
	int groom_quantity=n;
	for(int i=0;i<bride_quantity;i++)
	{
		for(int j=0;j<groom_quantity;j++)
		{
			if(bride[i]==groom[j])
			{
				select++;
				break;
			}
			//else if(bride[i])
			cout<<"in j "<<j<<endl;	
		}
		cout<<"in i "<<i<<endl;
	}
	
	
	
	
	return 0;
}
