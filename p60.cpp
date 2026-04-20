#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mm;
    cin>>mm;
    for(int pp=0;pp<mm;pp++)
    {
      int a,b,l;
      cin>>a>>b>>l;
      int p=0;
      int x=min(a,b);
      int y=max(a,b);
      while(x<=y)
      {
        if(x==y)
        {
           p=1;
           break;
        }
        x=x*min(a,b);
      }
      if(a!=b && p!=1)
      {
      long long int a1=1;
      int c=l;
      while(c>=a && c%a==0)
      {
        c=c/a;
        int c1=c;
         while(c1>=b && c1%b==0)
         {
          a1++;
          c1/=b;
         }
      }
      c=l;
      while(c>=a && c%a==0)
      {
         a1++;
         c=c/a;
      }
     c=l;
      while(c>=b && c%b==0)
      {
         c=c/b;
         a1++;
      }
      cout<<a1<<endl;
      }
      else
      {
       int a1=1;
      int c=l;
      int a2=min(a,b);
      while(c>=a2 && c%a2==0)
      {
          a1++;
          c/=a2;
      }
      cout<<a1<<endl;
      }
    }
}