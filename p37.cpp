#include <iostream>
#include <bits/stdc++.h>
#define ll long long;
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a;
    int x=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a[1]=='+')
        x++;
        else
        x--;
        
    }
    cout<<x;
}