#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mm;
    cin>>mm;
    for(int pp=0;pp<mm;pp++)
    {
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      if(n==1)
      {
        cout<<0<<"\n";
      }
      else
      {
      int ns=0,ne=n-1;
      while(ns<n-1 && a[ns]==a[ns+1])
      {
         ns++;
      }
      while(ne>0 && a[ne]==a[ne-1])
      {
         ne--;
      }
      ne=n-ne;
      ns=ns+1;
      if(ns==n)
      {
        cout<<0<<"\n";
      }
      else if(a[0]==a[n-1])
      {
        cout<<(n-ns-ne)<<"\n";
      }
      else
      {
        cout<<n-max(ns,ne)<<"\n";
      }
      }
    }
}