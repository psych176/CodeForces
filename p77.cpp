#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int nn;
   cin>>nn;
   for(int pp=0;pp<nn;pp++)
   {
       int n;
       cin>>n;
       int a[n];
       int m=-1; int ae=1;
       for(int i=0;i<n;i++)
       {
         cin>>a[i];
         if(a[i]%2==1)
         {
         ae=0;
         if(m<a[i])
         m=a[i];
         }
      }
      long long int t=m;int f=0;
      sort(a,a+n);
      if(ae)
      cout<<0<<"\n";
      else
      {
          int c=0;
          for(int i=0;i<n;i++)
          {
            if(a[i]%2==0)
            {
               c++;
               if(t<a[i])
               f=1;
               t=t+a[i];
            }
          }
          cout<<c+f<<"\n";
      }
   }    
}