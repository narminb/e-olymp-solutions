#include <bits/stdc++.h>
using namespace std;
int main()
{
        string s;
        int n, i;
        getline (cin,s);
        n=s.size();
        for(i=0; i<n; i++)
        {          
 
 if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y') 
                cout<<s[i]<<s[i];
           else
                cout<<s[i];
        }
        return 0;
}
