#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int mnm=0;mnm<t;mnm++)
    {
       int n;
       cin>>n;
       char a[n];
       for(int i=0;i<n;i++)
       {
        cin>>a[i];
       }
       int max=0;int t=0;int count=0;
       for(int i=0;i<n;i++)
       {
        if(a[i]=='#')
        {
            if(t>max)
            {
                max=t;
            }
            t=0;
        }
        else
        {
           t++;
           count++;
        }
       }
       if(t>max)
            {
                max=t;
            }
       if(max>2)
       cout<<2<<"\n";
       else 
       cout<<count<<"\n";
    }
}