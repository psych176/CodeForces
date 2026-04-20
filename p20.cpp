#include <iostream>
using namespace std;
int main()
{
   int n,m;
   cin>>n>>m;
   int a[n];
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
   int max=0;int index;
   for(int i=0;i<n;i++)
   {
      int t=a[i];int s=0;
      while(t>m)
      {
         t-=m;
         s++;
      }
      if(s>=max)
      {
        max=s;
        index=i+1;
      }
   }
   cout<<index;
}