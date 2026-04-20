#include <iostream>
using namespace std;
int main()
{
   int nn;
   cin>>nn;
   for(int pp=0;pp<nn;pp++)
   {
      int n,k;
      cin>>n>>k;
      if(n==1)
      {
        cout<<0<<"\n";
      }
      else if(n==k)
      {
        cout<<1<<"\n";
      }
      else
      {
         if(n%k==0)
         cout<<n/k+1<<"\n";
         else
         cout<<n/k+2<<"\n";
      }
   }
}