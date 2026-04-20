#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int p(int a,int i)
{
    if(i==0)
    return 1;
    return (long long int)a*p(a,i-1);
}
int main()
{
    int mm;
    cin>>mm;
    for(int pp=0;pp<mm;pp++)
    {
      long long int k=0;long long int m=0;
      cin>>k>>m;
      m=m%(3*k);
      if(m>=2*k)
      {
        cout<<("0");
      }
      else
      {
        long long int r=2*k-m;
        cout<<(r);
      }
      cout<<"\n";
    }
}