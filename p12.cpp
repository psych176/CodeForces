#include <iostream>
using namespace std;
int main()
{
    int a,b;int t;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>t;
            if(t==1)
            {
                a=i;
                b=j;
            }
        }
    }
    int s=0;
    if(a>2)
    {
       s=s+a-2;
    }
    else
    {
        s=s+2-a;
    }
    if(b>2)
    {
        s=s+b-2;
    }
    else
    {
        s=s+2-b;
    }
    cout<<s;
}