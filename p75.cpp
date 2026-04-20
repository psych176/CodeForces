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
       int count=0;int flag=1;
       for(int i=0;;i++)
       {
           
           for(int j=0;j<n-1;j++)
           {
                if(a[j]!=0 && a[j]>a[j+1])
                a[j]--;
           }
           if(a[n-1]!=0)
           a[n-1]--;
           count++;
           if(a[0]==0)
           break;
       }
       cout<<count<<"\n";
   }    
}