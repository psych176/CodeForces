#include <algorithm> 
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int mnm=0;mnm<t;mnm++)
    {
       int n;
       cin>>n;
       
       if(n%3==0)
       cout<<"Second\n";
       else
       cout<<"First\n";
    }
}