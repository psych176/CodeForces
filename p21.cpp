#include <iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[7];int sum=0;
   for(int i=0;i<7;i++)
   {
    cin>>a[i];
    sum=sum+a[i];
   }
   while(n>sum)
   {
     n=n-sum;
   }
   int i;
   for(i=0;i<7;i++)
   {
     if(a[i]>=n)
     {
        break;
     }
     else
     {
        n=n-a[i];
     }
   }
   cout<<i+1;
}