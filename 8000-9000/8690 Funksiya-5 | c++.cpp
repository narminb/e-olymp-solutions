#include <iostream>

using namespace std;

long long f(long long  x ,long long y, long long  z){
    return (x*y*z + x + y*y +z*z*z);
}
int main()
{long long  a,b,c;
cin>>a>>b>>c;
cout<<f(a,b,c);
}
