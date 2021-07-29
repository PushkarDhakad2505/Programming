#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ar[n],br[n];
		int size=4*n-1;
		for(int i=0;i<size;i++)
		{
			cin>>ar[i];
			cin>>br[i];
		}
		for	(int i=0;i<size;i++)
		{
			x=count(ar,ar+size,ar[i])
			
			
				
		}
	}
	return 0;
}

//        
//    setar=list(set(ar))
//    setbr=list(set(br))
//
//    for i in range(len(setar)):
//        if(ar.count(setar[i]))%2!=0:
//            print(setar[i],end=" ")
//            break
//    for i in range(len(setbr)):
//        if(br.count(setbr[i]))%2!=0:
//            print(setbr[i])
//            break
