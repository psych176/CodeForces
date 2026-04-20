#include <iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;int a=2;int flag=0;
   while(n>10)
   {
     int t=n%10;
     if(t==1)
     {
        a=2;
     }
     else if(t==4 && a>0)
     {
        a--;
     }
     else
     {
        flag=1;
        break;
     }
     n=n/10;
   }
   if(n!=1)
   {
    cout<<"NO";
   }
   else if(flag==1)
   cout<<"NO";
   else
   cout<<"YES";
}