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
     cin>>a[i];
     int m=0;int md=0;
     long long int sum=0;
     m=a[0];
     for(int i=0;i<n;i++)
     {
        if(a[i]>=m)
        {
            m=a[i];
        }
        else
        {
            int t=m-a[i];
            if(t>md)
            {
               sum+=(long long int)md;
               md=t;
            }
            else
            {
                sum+=(long long int)t;
            }
        }
        
     }
        sum+=(long long int)md*2;
         cout<<sum<<"\n";
   }    
}