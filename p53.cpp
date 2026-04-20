#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mm;
    cin>>mm;
    for(int pp=0;pp<mm;pp++)
    {
      int n,k;
      cin>>n>>k;
      int c=0;
      if(k<=n*2)
      {
        if(k%2==0)
        c=k/2;
        else
        c=(k/2)+1;
      }
      else if(k<=4*(n-1))
      {
        if(k%2==0)
        c=k/2;
        else
        c=(k/2)+1;
      }
      else if(k<=((4*n)-2))
      {
        if(k==(4*n-2))
        c=n*2;
        else
        c=n*2-1;
      }
      cout<<c<<"\n";
    }
}