#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
   int n;
   cin>>n;
   unordered_map<string,int> m;
   string a1[n];
   for(int i=0;i<n;i++)
   {
      cin>>a1[i];
   }
   int f1=0;int f2=0;int j=0;
   for(int i=0;i<n;i++)
   {
      m[a1[i]]++;
      if(a1[0]!=a1[i])
      j=i;
   }
   if(j==0)
   {
    cout<<a1[0];
   }
   else
   {
    if(m[a1[0]]>=m[a1[j]])
    cout<<a1[0];
    else
    cout<<a1[j];
   }
}