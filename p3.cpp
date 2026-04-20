#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int mnm=0;mnm<t;mnm++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((b-c)%2==0)
        cout<<1<<" ";
        else
        cout<<0<<" ";
        if((a-c)%2==0)
        cout<<1<<" ";
        else
        cout<<0<<" ";
        if((b-a)%2==0)
        cout<<1<<"\n";
        else
        cout<<0<<"\n";
    }
}