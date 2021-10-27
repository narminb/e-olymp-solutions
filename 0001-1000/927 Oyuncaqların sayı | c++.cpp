#include <iostream>
using namespace std;
int main(){
    int n,a,s=0;
    double b;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a>>b;
        if (b<50){
            s+=a;
        }
    }cout<<s;
}
