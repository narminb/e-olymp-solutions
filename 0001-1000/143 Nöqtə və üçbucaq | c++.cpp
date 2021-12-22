#include <iostream>

using namespace std;

struct coord{
    double x,y;
};

coord o,a,b,c;

int dis(coord A, coord B, coord O){
    return (A.x-O.x)*(B.y-A.y)-(B.x-A.x)*(A.y-O.y);
}
int comp(double z1,double z2,double z3){
    if ((z1>=0 && z2>=0 && z3>=0) || (z1<=0 && z2<=0 && z3<=0))
    return 1;
    else 
    return 0;
}

int main()
{
    double z1,z2,z3;
    cin>>o.x>>o.y>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y;
    z1=dis(a,b,o);
    z2=dis(b,c,o);
    z3=dis(c,a,o);
    cout<<comp(z1,z2,z3);
}
