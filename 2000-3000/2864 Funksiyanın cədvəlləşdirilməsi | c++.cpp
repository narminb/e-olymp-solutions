#include <iostream>
#include <cmath>
using namespace std;

double fun(double x){
	return 3*sin(x);
}

int main()
{
	double a,b,h; 
	cin >> a>>b>>h;
	while (a<=b){
	cout << fixed<< a<< " "<<fun(a) <<endl;
	a+=h;}
}
