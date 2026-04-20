#include <iostream>
using namespace std;
int main()
{
   int nn;
   cin>>nn;
   for(int pp=0;pp<nn;pp++)
   {
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
      {
         cin>>a[i];
      }
      long long int ma=0;
      long long int sum=0;
      long long int count=0;
      for(int i=0;i<n;i++)
      {
         if(a[i]>ma)
         {
            sum=sum+ma;
            ma=a[i];
         }
         else
         {
            sum=sum+a[i];
         }
         if(ma==sum)
         {
            count++;
         }
      }
      cout<<count<<"\n";
   }
}