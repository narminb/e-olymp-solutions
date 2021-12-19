#include <iostream>

#include <iomanip>
using namespace std;

long long arasinda(long long a, long long b, long long x){
    if (a==0)
    return b/x+1;
    else
    return (b/x - (a-1)/x);
}
int main(){
    long long x,y,z;
    cin>>x>>y>>z;
    cout<<arasinda(x,y,z);
}
