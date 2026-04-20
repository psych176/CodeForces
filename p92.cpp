#include <bits/stdc++.h>
using namespace std;

int main() {

    int nn;
    cin >> nn;
    for (int tc = 0; tc < nn; ++tc) {
        unordered_map<int,int> m;
        unordered_map<int,int> m1;
        int n;
        cin>>n;
        int b[n];
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            m[b[i]]++;
        }
        int f=0;
        int z=1;
        for(auto it:m)
        {
            if((it.second%it.first)!=0)
            {
              cout<<-1<<endl;
              f=1;
              break;
            }
            m1[it.first]=z;
            z++;
        }
        if(f)
        continue;
        for(int i=0;i<n;i++)
        {
            cout<<m1[b[i]]<<" ";
            m[b[i]]--;
            if(m[b[i]]>0 && m[b[i]]%b[i]==0 )
            {
                m1[b[i]]=z;
                z++;
            }
        }
        cout<<endl;
    }
    return 0;
}