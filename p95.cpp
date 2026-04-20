#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int nn;
    cin>>nn;
    for(int ii=0;ii<nn;ii++)
    {
      int n;
      cin>>n;
      vector<int> ans(n);
      ans[0]=n/2+1;
      for(int i=1;i<n;i++)
      {
        if(i%2)
          ans[i]=ans[i-1]-i;
          else
          ans[i]=ans[i-1]+i;

      }
      for(int i=0;i<n;i++)
      {
        cout<<ans[i]<<" ";
      }
    }
}