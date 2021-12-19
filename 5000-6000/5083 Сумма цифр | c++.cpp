#include <iostream>
using namespace std;

int sum(int n){
    int s=0;
    while(n!=0){
        s+=n%10;
        n=n/10;
    }return s;
}
int main(){
    int n,i,min=100,s,inx=0,x;
    cin>>n;
    for (i=1;i<=n;i++){
        cin>>x;
       
        s=sum(x);
        if (s<min){
            min=s;
            inx=x;
        }
        else  if (s==min){
            if (x<inx)
            inx=x;
            
        }
    }cout<<inx;
}
