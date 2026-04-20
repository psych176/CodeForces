#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mm;
    cin>>mm;
    for(int pp=0;pp<mm;pp++)
    {
       int k,n;
       cin>>n>>k;
       int a[n];int flag=0;
       for(int i=0;i<n;i++)
       cin>>a[i];
        int min=5;int c=5;int e=0;
       for(int i=0;i<n;i++)
       {
          if(a[i]%k!=0)
          {
            c=(k-a[i]%k);
            if(min>c)
            {
                min=c;
            }
          }
          else 
          {
             flag=1;
             cout<<0<<"\n";
             break;
          }
          if(a[i]%2==0)
          e++;
       }
       if(k==4 && n>1 && min>0)
       {
          if(e>=2)
          min=0;
          else if(e==1 && min>1)
          min=1;
          else if(e==0 && min>2)
          min=2;
       }
       if(flag==0)
       cout<<min<<"\n";
    }
}