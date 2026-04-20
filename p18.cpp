#include <iostream>
#include <unordered_map> 
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
     cin>>a[i];
   }
   int m;
   cin>>m;
   int b[m];
   for(int i=0;i<m;i++)
   {
     cin>>b[i];
   }
   long long int v=0;long long int p=0;
   /*
   for(int i=0;i<m;i++)
   {
    int t=0;
     for(int j=0;j<n;j++)
     {
         if(b[i]==a[j])
         {
            v++;
            t++;
            p=p-t+n+1;
            break;
         }
         else
         {
            v++;
            t++;
         }
     }
     t=0;
   }
   cout<<v<<" "<<p;
   */
  unordered_map<int,int> m1;
  for(int i=0;i<n;i++)
  {
    int t=a[i];
    m1[t]=i;
  }
   for(int i=0;i<m;i++)
  {
    v=v+1+m1[b[i]];
    p=p+n-m1[b[i]];
  }
  cout<<v<<" "<<p;
}