#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nn;
    cin >> nn;
    for (int ii = 0; ii < nn; ii++)
    {
        
        int n;
        cin>>n;
        vector<int> a(n,0);
        for(int i=0;i<n;i++)
        cin>>a[i];
        vector<int> dp(n+1);
        dp[0]=0;
        vector<int> f(n+1,0);vector<int> li(n+1,0);vector<int> sli(n+1,0);
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                dp[i+1]=dp[i]+1;
            }
            else if(f[a[i]]==0)
            {
                li[a[i]]=i;
                f[a[i]]=1;
                dp[i+1]=dp[i];
            }
            else if(f[a[i]]<a[i])
            {
                f[a[i]]++;
               /* if(f[a[i]]==2)
                {
                    sli[a[i]]=i;
                }*/
               
                if(f[a[i]]==a[i])
                {
                    if(dp[li[a[i]]]+a[i]>dp[i])
                    {
                        dp[i+1]=dp[li[a[i]]]+a[i];
                        f[a[i]]=0;
                        li[a[i]]=i;
                    }
                    else
                    {
                        f[a[i]]--;
                        dp[i+1]=dp[i];
                    }
                }
                else
                dp[i+1]=dp[i];
                li[a[i]]=i;
                
            }
           // cout<<dp[i+1]<<" ";
        }
        cout<<dp[n]<<endl;
        dp.clear();
        li.clear();
        sli.clear();
        a.clear();
        f.clear();
    }
}