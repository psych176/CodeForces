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
      unordered_map<int,bool> m;
      int a,b,l;
      cin>>a>>b>>l;
      int c=0;
      for(int i=0;p(a,i)<=l && l%p(a,i)==0;i++)
      {
         for(int j=0;p(b,j)<=l && l%p(b,j)==0;j++)
         {
            long long int a1=p(a,i)*p(b,j);
              if(l>=a1 && l%a1==0)
              {
                int t=l/a1;
                if( m.find(t) == m.end())
                {
                    m[t]=1;
                }
              }
         }
      }
      cout<<m.size()<<endl;
    }
}