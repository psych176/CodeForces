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
      long long int sum=0;
      sum=sum+a[n-1];
      int max=-1;
      for(int i=0;i<n-1;i++)
      {
        if(a[i]>max)
        max=a[i];
      }
      sum=sum+max;
      cout<<sum<<"\n";
   }
}