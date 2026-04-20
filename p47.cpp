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
       string a="";
       if(n<=28)
       {
           a="aa";
           n=n-2;
           a=a+char(n+96);
       }
       else if(n<=53)
       {
           a="a";
           n=n-27;
           a=a+char(n+96);
           a=a+"z";
       }
       else
       {
         n=n-52;
         a=a+char(n+96);
         a=a+"zz";
       }
       cout<<a<<"\n";
    }
}