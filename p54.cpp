#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mm;
    cin>>mm;
    for(int pp=0;pp<mm;pp++)
    {
      int n;
      cin>>n;
      char a[n];
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      int c=0;int f=1;
     for(int i=0;i<n-1;i++)
     {
        if(a[i]=='*'&& a[i+1]=='*')
        {
            f=0;
            break;
            
        }
        else if(a[i]=='@')
        {
            c++;
        }
     }
     if(a[n-1]=='@' && f==1)
     {
        cout<<c+1<<"\n";
     }
     else
     {
        cout<<c<<"\n";
     }
    }
}