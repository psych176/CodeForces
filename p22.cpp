#include <iostream>
using namespace std;
int main()
{
   long long int n,k;
   cin>>n>>k;
   long long int e=n-(n/2);
   if(k>e)
   {
    //even
    long long int t=(k-e)*2;
    cout<<t;
   }
   else
   {
    //odd
    long long int t=(k-1)*2+1;
    cout<<t;
   }
}