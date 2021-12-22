#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i,k,a,b,n;
    string s;
    getline(cin,s);
    n=s.size();
    k=0;
    for (i=0;i<n;i++){
       	if (s[i]==' '){
       		a=i;
		   k=1;
            break;
	   }}
	   for (i=n-1;i>=0;i--){
	   	if (s[i]==' '){
       	b=i;
		   k=1;
            break;
	   }
	   }
	   if (k==0)
	     cout <<"-1";
	    else 
	      cout<<a<< ' '<< b;
}
