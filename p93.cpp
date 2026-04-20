#include <bits/stdc++.h>
using namespace std;

int main() {

    int nn;
    cin >> nn;
    for (int tc = 0; tc < nn; ++tc) {
        int n,k;
        cin>>n>>k;
        vector<int> a;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        vector<long long int> sum;
        for(int iii=0;iii<3;iii++)
        {
        sort(a.begin(),a.end());
        int mex=0;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
           if(mex==a[i])
           {
            mex++;
           }
            m[a[i]]++;
        }
        long long int s=0;
        for(int i=0;i<n;i++)
        {
           if((m[a[i]]-1)==0)
           {
             a[i]=min(a[i],mex);
           }
           else
           a[i]=mex;

           s=s+(long long)a[i];
        }
        sum.push_back(s);
        m.clear();
        mex=0;
       }
       if(k==1)
       cout<<sum[0]<<endl;
       else if(sum[1]==sum[0])
       cout<<sum[1]<<endl;
       else if(k%2==1)
       cout<<sum[2]<<endl;
       else
       cout<<sum[1]<<endl;
    }
    return 0;
}