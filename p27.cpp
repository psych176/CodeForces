#include <iostream>
using namespace std;
int main()
{
    int y,k,n;
    cin>>y>>k>>n;int flag=0;
    int s;
    /*
    for(int i=1;i<=k;i++)
    {
        if((i+y)%k==0)
        {
            s=i+y;
            break;
        }
    }*/
    s=k-y%k;
    for(int i=s;i<=(n-y);i+=k)
    {
        flag=1;
        cout<<i<<" ";
    }
    if(flag==0)
    cout<<-1;
}