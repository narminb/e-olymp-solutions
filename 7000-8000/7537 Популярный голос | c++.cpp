#include <iostream>
#include <iostream>

using namespace std;

int main()
{long T, i,n,s,maxx,imax,k;

cin>>T;
while(T--){
	s=0;
	cin>>n;
	long a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
		s=s+a[i];
	}
	maxx=a[0];
	imax=0;
	for(i=0;i<n;i++)
		if (a[i]>maxx){
			maxx=a[i];
			imax=i;
		}
		k=0;
	for(i=0;i<n;i++)
	     if (a[i]==maxx)
	       k++;
	if (k!=1)
	cout<<"no winner"<<endl;
	else
	{if (maxx>s/2.0)
	cout<<"majority winner "<<imax+1<<endl;
	else 
	cout<<"minority winner "<<imax+1<<endl;
	}
    
}}
