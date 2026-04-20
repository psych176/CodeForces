#include <iostream>
using namespace std;
int main()
{
   int nn;
   cin>>nn;
   for(int pp=0;pp<nn;pp++)
   {
      int a,b,c;
      cin>>a>>b>>c;
      int sum=a+b+c;
      if(sum%2==1)
      cout<<-1<<"\n";
      else
      {
        int count=0;
          for(;c>0;c--)
          {
             if(a>0 || b>0)
             {
                count++;
                if(b>a)
                b--;
                else
                a--;
             }
             else 
             {
                break;
             }
          }
          count+=a;
          cout<<count<<"\n";
      }
   }
}