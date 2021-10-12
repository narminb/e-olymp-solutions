#include <iostream>
using namespace std;
int main(){
	int h1,h2,m1,m2,s1,s2,t1,t2,t;
	cin>>h1>>m1>>s1>>h2>>m2>>s2;
	t1=h1*3600+m1*60+s1;
	t2=h2*3600+m2*60+s2;
	t=t2-t1;
	cout<< t/3600<<" "<<t%3600/60<<" "<< t%60;
}
