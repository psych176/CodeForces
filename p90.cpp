#include <bits/stdc++.h>
using namespace std;

int main() {

    int nn;
    cin >> nn;
    for (int tc = 0; tc < nn; ++tc) {
       int x,k;
       cin>>k>>x;
       long long int a=x;
       for(;k>0;k--)
       {
         a=a*(long long int)2;
       }
       cout<<a<<endl;
    }
    return 0;
}