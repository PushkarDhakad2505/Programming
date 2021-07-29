#include<iostream>
using namespace std;
int main()
{
	long long int n,q,x,y;
	cin>>n>>q;
	cin>>x>>y;
	long long int board[n+1][n+1]={0};
	long long int ob1,ob2;
	for(long long int i=0;i<q;i++)//marking 2 on obstacle
	{
		cin>>ob1>>ob2;
		board[ob1][ob2]=2;
	}
	
		long long int j=x-1;
		while(j>0 and board[j][y]!=2)//coloumn up
		{
			board[j][y]=1;
			j--;
		}
		j=x+1;
		while(j<n+1 and board[j][y]!=2)//coloumn down
		{
			board[j][y]=1;
			j++;
		}
		
		
		
		j=y-1;
		while(j>0 and board[x][j]!=2)//rows left
		{
			board[x][j]=1;
			j--;
		}	
		
		
		j=y+1;
		while(j<n+1 and board[x][j]!=2)//rows right
		{
			board[x][j]=1;
			j++;
		}	
			
			
			
			
			
			
			
		long long int c1=x,c2=y;
		while((c1!=0 and c2!=0) and board[c1][c2]!=2)//diagonal up l to r
		{
			board[c1][c2]=1;
			c1--;
			c2--;
		}
		c1=x,c2=y;
		while((c1!=n+1 and c2!=n+1) and  board[c1][c2]!=2)//diagonal down l to r
		{
			board[c1][c2]=1;
			c1++;
			c2++;
		}
		c1=x,c2=y;
		while((c1!=0 and c2!=n+1) and board[c1][c2]!=2)//diagonal up r to l
		{
			board[c1][c2]=1;
			c1--;
			c2++;
		}
		c1=x,c2=y;
		while((c1!=n+1 and c2!=0)and board[c1][c2]!=2)//diagonal down r to l
		{
			
			board[c1][c2]=1;
			c1++;
			c2--;
		}
		board[x][y]=5;
		int count=0;
		for(long long int i=1;i<n+1;i++)
		{
			for(long long int j=1;j<n+1;j++)
			{
				if(board[i][j]==1)
					count++;
			}
		}			
		cout<<count;
	return 0;
}
