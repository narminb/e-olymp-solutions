#include <iostream>
using namespace std;
int main(){
    int e,f,c,q,cem=0,n;
    cin>>e>>f>>c;
    n=e+f;
    while(n>=c){
      q=n%c;
      cem+=n/c;
      n=n/c+q;
    }cout<<cem;
}
