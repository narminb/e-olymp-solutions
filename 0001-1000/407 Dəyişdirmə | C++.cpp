#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        if (k%3==0){
            cout << "GCV"<< endl;
        }else if (k%3==1){
            cout << "VGC"<< endl;
        }else {
            cout<<"CVG"<<endl;
        }
    }
}
