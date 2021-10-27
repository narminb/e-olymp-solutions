#include <iostream>
#include <string>
using namespace std;
int main(){
	int x=0,y=0,i,n;
	string a ;
	cin>>a;
	n=a.length();
	for (i=0;i<n;i++){
	    if (i%2!=0){
	        x+=int(a[i])-48;
	    }else{
	        y+=int(a[i])-48;
	    }
	}cout<<x*y;
	
}
