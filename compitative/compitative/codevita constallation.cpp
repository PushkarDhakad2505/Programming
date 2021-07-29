#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[3][3]={{'.','*','.'},{'*','*','.'},{'*','.','*'}};
	int e[3][3]={{'*','*','*'},{'*','*','*'},{'*','*','*'}};
	int i[3][3]={{'*','*','*'},{'.','*','.'},{'*','*','*'}};
	int o[3][3]={{'*','*','*'},{'*','.','*'},{'*','*','*'}};
	int u[3][3]={{'*','.','*'},{'*','.','*'},{'*','*','*'}};
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<(a[i][j])<<" ";
		}cout<<endl;
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<e[i][j]<<" ";
		}cout<<endl;
	}
	
	for(int k=0;k<3;k++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<i[k][j]<<" ";
		}cout<<endl;
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<e[i][j]<<" ";
		}cout<<endl;
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<u[i][j]<<" ";
		}cout<<endl;
	}
	
	
	
	
	
	
	
	
	return 0;
}
