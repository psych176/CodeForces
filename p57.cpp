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
      char a1;
      cin>>n;
      cin>>a1;
      char a[n*2][2];
      for(int i=0;i<n*2;i++)
      {
         for(int j=0;j<2;j++)
         {
            cin>>a[i][j];
         }
      }
      int t=0;
      int s[3];
      s[0]=0;
      s[1]=0;
      s[2]=0;
      
      char s1='S';
      char s2='C';
      char s3='D';

      if(s1==a1)
      {
         s1='H';
      }
      if(s2==a1)
      {
        s2='H';
      }
      if(s3==a1)
      {
        s3='H';
      }
      for(int i=0;i<2*n;i++)
      {
        if(a1==a[i][1])
        {
            t++;
        }
        else if(s1==a[i][1])
        {
           s[0]++;
        }
        else if(s2==a[i][1])
        {
           s[1]++;
        }
        else if(s3==a[i][1])
        {
           s[2]++;
        }
      }
      int odd=0;
      for(int i=0;i<3;i++)
      {
         if(s[i]%2==1)
         odd++;
      }
      if(t<odd)
      {
        cout<<"IMPOSSIBLE"<<endl;
      }
      else if(((t-odd)%2)==1)
      {
        cout<<"IMPOSSIBLE"<<endl;
      }
      else
      {
          bool vis[2*n];
          int sa[3][n];int st[t];int aa,bb,cc,tt;
          aa=0;bb=0;cc=0;tt=0;
          for(int i=0;i<2*n;i++)
          {
             if(a[i][1]==s1)
             {
                sa[0][aa]=a[i][0];
                aa++;
             }
             else if(a[i][1]==s2)
             {
                sa[1][bb]=a[i][0];
                bb++;
             }
             else if(a[i][1]==s3)
             {
                sa[2][cc]=a[i][0];
                cc++;
             }
             else
             {
                st[tt]=a[i][0];
                tt++;
             }
          }
          char suit[3];
        suit[0]='S';
        suit[1]='C';
         suit[2]='D';
        sort(sa[0],sa[0]+s[0]);
        sort(sa[1],sa[1]+s[1]);
        sort(sa[1],sa[1]+s[1]);
        sort(st,st+t);
         if(suit[0]==a1)
        {
           suit[0]='H';
        }
        if(suit[1]==a1)
        {
          suit[1]='H';
        }
        if(suit[2]==a1)
        {
          suit[2]='H';
        }
        tt=0;
          for(int i=0;i<3;i++)
          {
            aa=0;
            while(s[i]>0)
            {
                
                if(s[i]>=2)
                {
                  cout<<(char)sa[i][aa]<<suit[i]<<" ";
                  aa++;
                  cout<<(char)sa[i][aa]<<suit[i]<<" ";
                  aa++;
                  s[i]=s[i]-2;
                }
                else
                {
                  cout<<(char)sa[i][aa]<<suit[i]<<" ";
                  aa++;
                  cout<<(char)st[tt]<<a1<<" ";
                  tt++;
                  s[i]=s[i]-1;
                }
                cout<<endl;
            }
          }
          int count=0;
          for(int i=tt;i<t;i++)
          {
              cout<<(char)st[i]<<a1<<" ";
              count++;
              if(count%2==0)
              cout<<endl;
          }
      }

    }
}