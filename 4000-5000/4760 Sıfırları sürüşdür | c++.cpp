#include <iostream>
using namespace std;

int main(){
   int n,i,j;  
   cin>>n;
   int a[n];
   for(i=0;i<n;i++){
   	cin>>a[i];
   } 
   for (i=0;i<n;i++){
   	if (a[i]!=0)
   	cout << a[i]<< " ";}


   for (i=0;i<n;i++){
   	if (a[i]==0)
   	cout << a[i]<< " ";
   }
}
