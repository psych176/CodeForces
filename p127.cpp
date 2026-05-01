//VK Cup 2022 - Отборочный раунд (Engine) C. Equal Frequencies
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> parent;
int main()
{
    int nn;
    cin>>nn;
    for(int ii=0;ii<nn;ii++)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> dup(26,0);
        priority_queue<pair<int,char>> pq;
        for(int i=0;i<n;i++)
        {
            dup[s[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            pq.push({dup[i],'a'+i});
        }
        sort(dup.begin(),dup.end());
        int ans=INT_MAX;int ind=1;
        for(int i=1;i*i<=n;i++)
        {
          if(n%i==0 && n/i<=26)
          {
              int t1=n/i;
              int l=26-t1;
              int sum=0;
              while(l<=25)
              {
                  if(dup[l]>=i)
                  break;
                  sum+=(i-dup[l]);
                  l++;
              }
              if(ans>sum)
              {
                ans=sum;
                ind=i;
              }
          }
          int t=n/i;
          if(n%t==0 && n/t<=26)
          {
              int t1=n/t;
              int l=26-t1;
              int sum=0;
              while(l<=25)
              {
                  if(dup[l]>=t)
                  break;
                  sum+=(t-dup[l]);
                  l++;
              }
              if(ans>sum)
              {
                ans=sum;
                ind=t;
              }
          }
        }
        int t1=n/ind;
        vector<pair<char,int>> a;
        unordered_map<char,int> freq;
        int r=t1-1;
        while(t1>0)
        {
            t1--;
            a.push_back({pq.top().second,pq.top().first});
            freq[pq.top().second]=ind;
            pq.pop();
        }
        
        cout<<ans<<endl;
        for(int i=0;i<n;i++)
        {
            if(freq[s[i]]>0)
            {
                cout<<s[i];
                freq[s[i]]--;
            }
            else
            {
                if(a[r].second<ind)
                {
                     cout<<a[r].first;
                     a[r].second++;
                }
                else
                {
                    r--;
                    cout<<a[r].first;
                    a[r].second++;
                }
            }
        }
        cout<<endl;
    }

}