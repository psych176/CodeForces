#include <bits/stdc++.h>
using namespace std;

int main() {

    int nn;
    cin >> nn;
    for (int tc = 0; tc < nn; ++tc) {
       int n;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++)
       {
          cin>>a[i];
       }
       for(int i=0;i<n;i++)
       {
          cout<<n-a[i]+1<<" ";
       }
       cout<<endl;
    }
    return 0;
}