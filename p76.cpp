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
       int a[4];
       a[0]=0;
       a[1]=0;a[2]=0;a[3]=0;
       for(int i=0;i<4*n;i++)
       {
        char t;
        cin>>t;
        if(t=='A')
        a[0]++;
        else if(t=='B')
        a[1]++;
        else if(t=='C')
        a[2]++;
        else if(t=='D')
        a[3]++;
       }
       int sum=0;
       for(int i=0;i<4;i++)
       {
         if(a[i]>n)
         sum=sum+n;
         else
         sum=sum+a[i];
       }
       cout<<sum<<"\n";
   }    
}