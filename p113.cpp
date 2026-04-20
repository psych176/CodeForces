#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    long long n;
    cin>>n;
    string s;
    cin>>s;
    long long nn;
    cin>>nn;
    long long plus=0;
        long long minus=0;
        for(long long i=0;i<n;i++)
        {
           if(s[i]=='+')
           plus++;
           else
           minus++;
        }
        long long equal=min(plus,minus);
        long long diff=max(plus,minus)-equal;
    for(long long ii=0;ii<nn;ii++)
    {
        long long a,b;
        cin>>a>>b;
        
        
        if(a==b)
        {
            if(diff>0)
            cout<<"NO"<<endl;
            else
            cout<<"YES"<<endl;
            continue;
        }
        long long t1=(abs(a-b));
        if((equal*t1)>=(diff*(min(a,b))))
        {
           if(((diff*a)%t1)==0 && (((diff*a)/t1)<=equal))
           cout<<"YES"<<endl;
           else if(((diff*b)%t1)==0 && (((diff*b)/t1)<=equal))
           cout<<"YES"<<endl;
           else
           cout<<"NO"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}