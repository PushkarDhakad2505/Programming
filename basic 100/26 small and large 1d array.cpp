#include<iostream>
using namespace std;
int main()
{
	int size;
	cin>>size;
	int arr[size];
	for (int i=0;i<size;i++)
		cin>>arr[i];
	int min=arr[0];
	int max=arr[0];
	for(int i=1;i<size;i++)
	{
		if(min>arr[i])
			min=arr[i];
			
		if(max<arr[i])
			max=arr[i];
	}
	cout<<"minimum : "<<min<<"\t"<<"maximum : "<<max;
	
	
	
	
	
	
	return 0;
}
