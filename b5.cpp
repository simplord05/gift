#include <iostream>
#define ll long long
using namespace std;

int main(){
    ll sal; cin >> sal;
    if(sal <= 5000000){
        cout << 0;
        return 0;
    }
    if(sal > 5000000 && sal <= 15000000){
        cout << (sal - 5000000) * 10 / 100;
        return 0;
    }
    if(sal > 15000000){
        cout << (sal - 15000000) * 15 / 100 + 1000000;
        return 0;
    }
}
