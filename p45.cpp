#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int gcd(int a,int b)
{
     if(a>b)
     {
        gcd(a-b,b);
     }
     else if(b>a)
     {
        gcd(a,b-a);
     }
     else
     {
        return a;
     }
}
int main()
{
    int mm;
    cin>>mm;
    for(int pp=0;pp<mm;pp++)
    {
       long long int a,b;
       cin>>a>>b;
       if(b%a==0)
       {
         cout<<b*(b/a)<<"\n";
       }
       else if(a==1)
       {
        cout<<b*b<<"\n";
       }
       else
       {
        cout<<(a*b)/gcd(a,b)<<"\n";
       }
    }
}