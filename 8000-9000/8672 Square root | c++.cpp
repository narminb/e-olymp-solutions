#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double fun(double x){
	return sqrt(x);
}

int main()
{
	double a; 
	cin>>a;
	cout << fixed << setprecision(6) <<fun(a);
}
