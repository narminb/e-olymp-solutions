#include <iostream>
using namespace std;
int main(){
	int n,eded1,eded2,eded3;
	cin>>n;
	
eded1=n/10;
eded2=(n/100)*10+n%10;
eded3=n%100;
if (eded1>=eded2 && eded1>=eded3){
	cout << eded1;}
else if (eded2>=eded1 && eded2>=eded3){
	cout << eded2;}
	else if (eded3>=eded1 && eded3>=eded2){
	cout << eded3;}}
