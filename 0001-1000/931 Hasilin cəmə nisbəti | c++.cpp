#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n,q;
    double hasil=1,cem=0;
    cin>>n;
    while(n>0){
        q=n%10;
        cem+=q;
        hasil*=q;
        n=n/10;
    }cout<<fixed<<setprecision(3)<<hasil/cem;
  
}
