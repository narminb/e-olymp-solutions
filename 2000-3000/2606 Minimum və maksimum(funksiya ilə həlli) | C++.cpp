#include <iostream>

using namespace std;

int min(int a, int b){
	if (a<=b)
	return a;
	else 
	return b;
	}
int max(int a, int b){
	if (a<=b)
	return b;
	else 
	return a;
	}

int main()
{
	int x,y; cin >> x>>y;
	cout << min(x,y)<< " "<<max(x,y) ;
}
