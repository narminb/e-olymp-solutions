#include <iostream>
#include <cmath>
using namespace std;

double fun(double x){
	return sin(x)+sqrt(log(3*x)/log(4))+ceil(3*exp(x));
}

int main()
{
	double x; 
	while (cin>>x){
	cout << fixed <<fun(x) <<endl;
	}
}
