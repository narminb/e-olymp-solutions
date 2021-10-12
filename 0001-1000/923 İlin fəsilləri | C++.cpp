#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	cin>>n;
	if (n==3 or n==4 or n==5){
		cout<<"Spring";
	}else if (n==6 or n==7 or n==8){
		cout<<"Summer";
	}else if (n==9 or n==10 or n==11){
		cout<<"Autumn";
	}else{
		cout<<"Winter";
	}

}
