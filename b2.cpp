#include <iostream>
#define ll long long
using namespace std;

int main(){
    int n; cin >> n;
    ll sumOdd = 0;
    ll sumEven = 0;
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        if(x % 2 == 0)
            sumEven += x;
        else
            sumOdd += x;
    }
    if(sumEven == 0)
        cout << "None" << endl;
    else
        cout << sumEven << endl;
    if(sumOdd == 0)
        cout << "None";
    else
        cout << sumOdd;
    return 0;
}
