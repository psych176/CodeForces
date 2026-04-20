#include <iostream>
#include <bits/stdc++.h>
#define ll long long;
using namespace std;
int main()
{
    int mm;
    cin>>mm;
    for(int pp=0;pp<mm;pp++)
    {
        int n;
        cin>>n;
        string a;
        cin>>a;
        int start=0;
        int end=0;
        for(int i=0;i<a.length();i++)
        {
            if(a[i]=='B')
            {
                start=i;
                break;
            }
        }
        for(int i=a.length()-1;i>0;i--)
        {
            if(a[i]=='B')
            {
                end=i;
                break;
            }
        }
        cout<<(end-start+1)<<"\n";
    }
}