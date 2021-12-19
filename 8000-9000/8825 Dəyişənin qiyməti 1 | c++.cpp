#include <iostream>
#include <iomanip>
using namespace std;
 
double fun(double x){
	return x*x*x - (5*x*x)/7 + 9*x - 3/x +1;
}

 
int main() {
	double a;
	cin>>a;
	cout<< fixed<< setprecision(3)<<fun(a);}
