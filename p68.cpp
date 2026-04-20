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
      int a[k];
      for(int i=0;i<k;i++)
      cin>>a[i];
      int max=-1; int count=0;
      for(int i=0;i<k;i++)
      {
        if(max<a[i])
        {
            max=a[i];
            count=0;
        }
        else if(max==a[i])
        {
           count++;
        }
      }
      long long int sum=0;
       for(int i=0;i<k;i++)
       {
          if(a[i]==0)
          {
             
          }
          else if(a[i]!=max)
          {
             sum=sum+(a[i]*2)-1;
          }
       }
       sum=sum+(long long int)count*((long long int) max*2-1);
       cout<<sum<<"\n";
   }
}