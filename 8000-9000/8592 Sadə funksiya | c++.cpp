#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double f(double x){
    return (x+sin(x));
}
int main(){
double a;
cin>>a;
cout<<fixed<<setprecision(4)<<f(a);
}
