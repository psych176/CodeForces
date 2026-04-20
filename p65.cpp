#include <iostream>
using namespace std;
int main()
{
   int nn;
   cin>>nn;
   for(int pp=0;pp<nn;pp++)
   {
      long long int a,b,c;
      long long int d;
      cin>>a>>b>>c;
      for(int i=0;i<5;i++)
      {
         if(a<=b && a<=c)
         a++;
         else if(b<=a && b<=c)
         b++;
         else
         c++;
      }
      d=a*b*c;
      cout<<d<<"\n";
   }
}