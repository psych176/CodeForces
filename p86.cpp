#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nn;
    cin >> nn;
    for (int ii = 0; ii < nn; ii++)
    {
        int n,k;
        cin>>n>>k;
        char a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int c=0;
        int ch=0;bool flag=0;
        for(int i=0;i<n;i++)
        {
           if(a[i]=='1')
           {
            c++;
            ch++;
           }
           else
           {
            ch=0;
           }
           if(ch==k)
           {
              flag=1;
           }
        }
        if(flag)
        {
            cout<<"NO\n";
            continue;
        }
        else
        {
            cout<<"YES"<<endl;
            c++;ch=1;
            for(int i=0;i<n;i++)
            {
                if(a[i]=='1')
               {
                 cout<<ch<<" ";
                 ch++;
               }
               else
                {
                   cout<<c<<" ";
                   c++;
                 }    
            }
            cout<<"\n";
        }
    }
}