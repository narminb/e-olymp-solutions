#include <iostream>
#include <iomanip>
using namespace std;

double max(double a,double b){
    if(a>b)
    return a;
    else
    return b;
}
double min(double a, double b, double c){
    double m=a;
    if (b<m)
    m=b;
    if (c<m)
    m=c;
    return m;
}
int main()
{double x,y,z;
cin>>x>>y>>z;
cout << fixed<<setprecision(2)<<min(max(x,y),max(y,z),x+y+z);
  
}
