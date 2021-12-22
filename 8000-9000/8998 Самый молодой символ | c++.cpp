#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,i,k=0,q=130;
    string s;
    getline(cin,s);
    n=s.size();
    for(i=0;i<n;i++){
     char a=s[i];
     q=min(int(a),q);}
     char b=q;
    for(int i=0;i<n;i++){
       if(s[i]==b)
       k++;}
      cout<<b<<' '<<k;
          
        
        
    }
