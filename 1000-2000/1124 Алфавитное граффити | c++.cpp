#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i,j,n;
	char a=97;

	cin>>n;
	for (i=0;i<n;i++){
		cout <<a;
		for (j=0;j<n-i-1;j++){
		   cout<<' ';
	}
	
	for (j=0;j<i+1;j++)	{
	
    cout<<char(97+j);}
  
    cout<<endl;}
}
