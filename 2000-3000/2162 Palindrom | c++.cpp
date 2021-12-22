#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
int i,n,t,k;
char a[11000];
char b[11000];
int main()
{
	gets(a);
	n=strlen(a);
		for (i=0;i<n;i++)
			if('a'<=a[i] && a[i]<='z')
			   b[k++]=a[i];
		t=0;
		
	for (i=0;i<k/2;i++)	
	   if(b[i]!=b[k-1-i]){
	   	t=1;
	   	break;
	   }	
	if(t==0)
	   cout << "YES";
	else 
	   cout<<"NO";
	   return 0;	   
}
