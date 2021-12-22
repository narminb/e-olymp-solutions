#include <iostream>
#include <string>
using namespace std;

bool f(char c){
	switch(c){
		  case '+':
	    case '-':
	    case '*':
	    case '**':
	    case '/':
	    case '//':
	    case '%':
	    	return true;
	    default:
	    	return false;
	}
}

int main()
{
    int n,i,k=0;
    string s;
    getline(cin,s);
    for (i=0;i<s.size();i++)
       if(f(s[i])){
       	if (!f(s[i-1]))
              k++;
	   }
	  cout<<k;
}
