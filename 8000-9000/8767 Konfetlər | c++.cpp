#include <iostream>

using namespace std;
 
int konfet(int n,int m){
	if (n==m)
	return 0;
	if (n<m)
	return m-n;
	if (m<n)
	return n-m;
}

 
int main() {
	int a,b;
	cin>>a>>b;
	cout<<konfet(a,b);}
