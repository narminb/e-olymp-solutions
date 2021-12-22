#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i,k=0;
    string s;
    getline(cin,s);
    for (i=0;i<s.size();i++){
       	if (s[i]=='a'){
		   
       	k++;
            cout<<i<<' ';}
	   }
	   if (k==0)
	     cout <<"-1";
}
