#include <algorithm> 
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int mnm=0;mnm<t;mnm++)
    {
       string s;
       int n;
       cin>>n;
       if(n==0)
       cout<<0<<"\n";
       else{
       cin>>s;
       int a=0;int b=0;int count=0;
       for(int i=0;i<n;i++)
       {
         if(s[i]=='A')
         {
         a++;
         b=0;
         }
         else
         {
            if(a!=0)
            {
            if(b==0)
            {
                count+=a;
                b=1;
                a=a-1;
            }
            else
            {
                count=count +1;
                a=a-1;
            }
            }
         }
       }
       cout<<count<<"\n";
       }
    }
}