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
      vector<char> ans(n);
      for(int i=0;i<n;i++)
      {
        cin>>ans[i];
      }
      int count=0;
      for(int i=0;i<n;i++)
      {
        if(ans[i]=='1')
        {
            count++;
        if(i==0)
        {
            if(ans[i+1]=='1')
            count++;
           ans[i+1]='1';
           ++i;
        }
        else if(i==n-1)
        {
           ans[n-2]='1';
        }
        else
        {
            ans[i+1]='1';
            ans[i-1]='1';
            ++i;
        }
        }
       
      }
      int temp=0;//track of consec zeroes
      for(int i=0;i<n;i++)
      {
        if(ans[i]=='0' && i<n-1)
        {
            temp++;
           if(temp==3)
           {
             ans[i-2]='1';
             ans[i-1]='1';
             ans[i]='1';
             temp=0;
             count++;
           }
           else if(ans[i+1]=='1' && temp>0)
           {
             count++;
             int t=i;
             while (temp>0)
             {
                ans[t--]='0';
                temp--;
             }
           }
        }
        else if(i==n-1)
        {  
            if(ans[n-1]=='0')
            temp++;
            if(temp>0)
            count++;
            int t=i;
             while (temp>0)
             {
                ans[t--]='0';
                temp--;
             }
        }
        
      }
      cout<<count<<"\n";
}
}