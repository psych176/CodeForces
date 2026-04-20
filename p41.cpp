#include <iostream>
#include <bits/stdc++.h>
#define ll long long;
using namespace std;
int main()
{
    int mm;
    cin>>mm;
    for(int pp=0;pp<mm;pp++)
    {
       int n,m,k;
       cin>>n>>m>>k;
       int a[n];int b[m];
       char aa[k];

       for(int i=0;i<n;i++)
       {
          cin>>a[i];
          if(a[i]<=k)
          {
            aa[a[i]-1]='a';
          }
       }
       for(int i=0;i<m;i++)
       {
        cin>>b[i];
        if(b[i]<=k)
        {
            if(aa[b[i]-1]=='a')
            aa[b[i]-1]='c';
            else if(aa[b[i]-1]!='c')
            aa[b[i]-1]='b';
        }
       }
       int a1,b1,c1;
       a1=0;
       b1=0;
       c1=0;
       for(int i=0;i<k;i++)
       {
          if(aa[i]=='a')
          a1++;
          else if(aa[i]=='b')
          b1++;
          else if(aa[i]=='c')
          c1++;
       }
       int t=a1+b1+c1;
       if(t!=k)
       {
         cout<<"NO"<<"\n";
       }
       else
       {
         if((a1+c1)>=(k/2) && (b1+c1)>=(k/2))
         cout<<"YES"<<"\n";
         else
         cout<<"NO"<<"\n";
       }
     }
}