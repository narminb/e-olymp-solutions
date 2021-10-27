#include <iostream>
using namespace std;
int main(){
    int n,k=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        if (n%i==n/i){
            k++;
        }
    }cout<<k;
  
}
