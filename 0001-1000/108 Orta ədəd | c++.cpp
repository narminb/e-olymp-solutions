#include <iostream>

using namespace std;


    int midle(int a ,int b, int c){ 
   
    if ((a<=b && b<=c) || (c<=b && b<=a))
        return b;
    else if ((b<=a && a<=c)|| (c<=a && a<=b))
        return a;
    else if ((a<=c && c<=b) || (b<=c && c<=a))
        return c;
    }   
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    cout<<midle(x,y,z);
}
