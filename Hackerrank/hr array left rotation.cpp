#include<iostream>
#include<list>
using namespace std;
int main()
{
    int iterator=0;
    int n,d;
    cin>>n>>d;
    int ar[n+d]={0};
    list<int> list1;
    for (int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int rotate=d%n;
    if(n==d)
    {
        for (int i=0;i<n;i++)
        {
            cout<<ar[i]<<" ";
        }
    }
    else
    {
        for (int i=0;i<d;i++)
        {
            int first_element=ar[iterator];
            iterator++;
            ar[n+iterator-1]=first_element;

        }
    }
    for(int i=iterator;i<n+d;i++)
    {
        cout<<ar[i]<<" ";
    }

    
    return 0;
}

