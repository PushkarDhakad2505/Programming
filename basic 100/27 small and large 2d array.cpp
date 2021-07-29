#include<iostream>
using namespace std;
int main()
{
	int size,m;
	cin>>size>>m;
	int arr[size][m];
	for (int i=0;i<size;i++)
	{
		for (int j=0;j<m;j++)		
			cin>>arr[i][j];
	}
	int min=arr[0][0];
	int max=arr[0][0];
	for(int i=0;i<size;i++)
	{
		for (int j=0;j<m;j++)
		{
			if(min>arr[i][j])
				min=arr[i][j];
				
			if(max<arr[i][j])
				max=arr[i][j];
		}
	}
	cout<<"minimum : "<<min<<"\t"<<"maximum : "<<max;
	
	
	
	
	
	
	return 0;
}
