#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    int b[m];int mina=101;int maxa=0;int minb=101;
    for(int i=0;i<n;i++)
    {
         cin>>a[i];
         if(mina>a[i])
         {
         mina=a[i];
         }
         if(maxa<a[i])
         {
         maxa=a[i];
         }
    }
    for(int i=0;i<m;i++)
    {
         cin>>b[i];
         if(minb>b[i])
         minb=b[i];
    }
    int v=max(mina*2,maxa);
    if(v<minb && v>0)
    {
        cout<<v;
    }
    else
    {
        cout<<-1;
    }
}