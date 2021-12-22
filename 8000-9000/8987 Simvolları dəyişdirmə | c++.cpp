#include <iostream>
#include <locale>
#include <algorithm>

using namespace std;

int main()
 {
        string s;
        int i, n;
        getline (cin, s);
        n=s.length();
        for(i=0;i<n;i++)
        {
                if(s[i]=='a')
                   s[i]='b';
                else
                if(s[i]=='b')
                   s[i]='a';


                cout<<s[i];
        }

        return 0;
}
