#include <algorithm> 
#include <iostream>
using namespace std;

    int main() {
        string s;
        cin>>s;
        int l=s.length();
        string s1="";string w="";
        for(int i=0;i<l;i++)
        {
            if(s[i]==' ' || i==l-1)
            {
              s1=w+" "+s1;
              w="";
            }
            else
            {
                w=w+s[i];

            }
        }
        cout<<s;
        return 0;
    }