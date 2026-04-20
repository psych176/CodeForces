#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mm;
    cin>>mm;
    for(int pp=0;pp<mm;pp++)
    {
      long long int m,t,c;
      cin>>m>>t>>c;
      long long int lost=1;int flag=1;bool f=0;
      while(flag==1)
      {
         if(f==0)
         {
            lost=1;
            c=c-1;
         }
         else
         {
            lost=lost+(lost+1)/m+1;
         }
         //lost>=rem
      }
    }
}