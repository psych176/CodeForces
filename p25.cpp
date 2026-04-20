#include <iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n];int sum=0;
   for(int i=0;i<n;i++)
   {
     cin>>a[i];
     sum=sum+a[i];
   }
   if(sum%n==0)
   {
       cout<<n;
   }
   else
      cout<<n-1;
}