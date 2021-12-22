#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i;
    string s;
    getline(cin,s);
    for (i=0;i<s.size();i++){
       	if (s[i]!='a')
            cout<<s[i];
	   }
}
