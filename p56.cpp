#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mm;
    cin>>mm;
    for(int pp=0;pp<mm;pp++)
    {
      int n,m;
      cin>>n>>m;
      int a[n];
      long long int c=0;
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      string s;
      cin>>s;
      int start=0;
      int end=n-1;
      for(int i=0;i<n;i++)
      {
        if(s[i]=='L')
        {
            start++;
        }
        else
        {
            end--;
        }
      }
      long long int b[n];
      for(int i=n-1,j=0;i>=0;i--,j++)
      {
        if(s[i]=='L')
        {
            start--;
            if(j!=0)
            {
                b[j]=b[j-1]*(long long int)a[start];
            }
            else
            {
                b[j]=a[start];
            }
            b[j]=b[j]%(long long int)m;

        }
        else
        {
            end++;
            if(j!=0)
            {
                b[j]=b[j-1]*(long long int)a[end];
            }
            else
            {
                b[j]=a[end];
            }
            b[j]=b[j]%(long long int)m;
        }
      }
      for(int i=n-1;i>=0;i--)
      {
        cout<<b[i]<<" ";
      }
      cout<<"\n";
    }
}