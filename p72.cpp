#include <iostream>
using namespace std;
int main()
{
   int nn;
   cin>>nn;
   for(int pp=0;pp<nn;pp++)
   {
      long long int a=0;
      cin>>a;
      int sc=0;
      int m=a%10;
      if(m<=8)
      sc=1;
      a=a/10;
      if(a==0)
      {
        cout<<"NO\n";
        return 0;
      }
      else
      {
        int f=1;
      while(a>0)
      {
        m=a%10;
        if(m==0)
        f=0;
        a=a/10;
      }
      if(m==1 && sc==1 && f==1)
      cout<<"YES\n";
      else
      cout<<"NO\n";
      }
   }
}