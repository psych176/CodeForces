//Codeforces Round 526 (Div. 2)  C. The Fair Nut and String
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    ll ans=1;
    ll cons=1;
    ll constant=1e9+7;
    for(int i=0;i<n;i++)
    {
       if(s[i]=='a')
       {
        cons++;
       }
       else if(s[i]=='b')
       {
         ans=(ans*(cons))%constant;
         cons=1;
       }
    }
    ans=ans*(cons)%constant;
    cout<<(ans-1)%constant<<endl;
}