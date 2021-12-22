#include <iostream>
#include <cmath>
using namespace std;

struct coord{
    double x,y;
};

struct ucbucaq{
    coord o,a,b,c;
    double saheparca(coord A,coord B,coord C){
        return fabs((A.x*B.y-A.y*B.x)+(B.x*C.y-B.y*C.x)+(C.x*A.y-C.y*A.x));
    }
    void comp(double S1,double S2,double S3,double S,coord a,coord b,coord c, coord o){
        if (S1+S2+S3<=S )
            if ((S1==0 || S2==0 || S3==0) || (( o.x==a.x && o.y==a.y) || ( o.x==b.x && o.y==b.y) || ( o.x==c.x && o.y==c.y)))
               cout <<"On";
            else 
               cout<< "In";
        else 
        cout<<"Out";
    }
};

double S,S1,S2,S3;
coord o,a,b,c;
ucbucaq t;
int main()
{
    cin>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y>>o.x>>o.y;
    S=t.saheparca(a,b,c);
    S1=t.saheparca(a,b,o);
    S2=t.saheparca(a,c,o);
    S3=t.saheparca(b,c,o);
    
    t.comp(S1,S2,S3,S,a,b,c,o);

}
