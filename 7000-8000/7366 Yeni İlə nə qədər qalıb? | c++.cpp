#include <iostream>

using namespace std;

int main() {
    long long n,gun,saat,deq,san;
    cin>>n;
    gun = n/86400;
    saat = (n - gun*86400)/3600;
    deq = (n - gun*86400 - saat*3600)/60;
    san = n - gun*86400 - saat*3600 - deq*60;

	cout << gun<< " "<< saat<< " "<< deq<< " "<<san;
}
