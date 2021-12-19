#include <iostream>

using namespace std;

int sum(int n){
    int s=0;
    while (n!=0){
        s=s+n%10;
        n=n/10;
        
    }return s;}
int comp(int x, int y){
    if(x==y)
    return 1;
    else
    return 0;
}
int main()
{int a,b,x,y;
char c;
cin>>a>>c>>b;
if (a<0)
a=-a;
x=sum(a);
y=sum(b);
if (comp(x,y)){
cout << "Yes";}
else{
cout<< "No";}
}
