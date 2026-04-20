#include <iostream>
using namespace std;
int main()
{
   int nn;
   cin>>nn;
   for(int pp=0;pp<nn;pp++)
   {
      int n,m;
      cin>>n>>m;
      char a[n][m];
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
        cin>>a[i][j];
        }
      }
      int i=0,j=0;int flag=0;
      for(i=0;i<n;i++)
      {
        for(j=0;j<m;j++)
        {
        if(a[i][j]=='#')
        {
          flag=1;
          break;
        }
        }
        if(flag==1)
        break;
      }
      int d=0;
      for(int ii=i;ii<n;ii++)
      {
        if(a[ii][j]=='#')
        d++;
      }
      d=d/2;
      i+=d;
      cout<<i+1<<" "<<j+1<<"\n";
   }
}