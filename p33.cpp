#include <iostream>
using namespace std;
void perm(string a,string b)
{
     if(a.length()==1)
     {
        cout<<b+a[0]<<endl;
        cout<<b<<endl;
        return;
     }
     perm(a.substr(1),b+a[0]);
     perm(a.substr(1),b);
}
int main()
{
    string a;string b="";
    cin>>a;
    perm(a,b);
}