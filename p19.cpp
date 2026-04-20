#include <iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int m=0;
   for(int i=0;i<n;i++)
   {
    int t;
    cin>>t;
    m+=t;
   }
   int a=0;
   for(int i=0;i<5;i++)
   {
     if((m+i+1)%(n+1)!=1)
     a++;
   }
   cout<<a;
}