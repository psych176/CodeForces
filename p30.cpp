#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
      int t=0;int p=0;
      t=0;p=0;
      for(int j=2;j*j<=a[i];j++)
      {
        if(a[i]%j==0 && (a[i]/j)!=j)
        {
          t++;
        } 
        else if(a[i]%j==0)
        {
            p++;
        }
      }
      if(t!=0)
      {
        cout<<"NO"<<"\n";
      }
      else if(p==1)
      {
        cout<<"YES"<<"\n";
      }
      else
      {
        cout<<"NO"<<"\n";
      }
    }
}