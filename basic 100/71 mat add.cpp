#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int mat1[n][n];
	cout<<"enter a "<<n<<" * "<<n<<" matrix 1 "<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>mat1[i][j];
		}
	}
	
	int mat2[n][n];
	cout<<"enter a "<<n<<" * "<<n<<" matrix 2 "<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>mat2[i][j];	
		}
	}
	cout<<" addition of  "<<n<<" * "<<n<<" matrix is "<<endl;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{	
			cout<<mat1[i][j]+mat2[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	return 0;
}
