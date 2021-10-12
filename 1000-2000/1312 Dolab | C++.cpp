#include <iostream>
using namespace std;
int main(){
	int a,b,c,x,y;
	cin >> a>> b>>c>>x>>y;
	if (a<=x && b<=y || b<=x && a<=y){
		cout<<"YES";
	}else if (a<=x && c<=y || c<=x && a<=y){
		cout<<"YES";
	}else if (b<=x && c<=y || c<=x && b<=y){
		cout<<"YES";
	}else {
	    cout<<"NO";
	}
        
}
