#include <iostream>
#define ll long long
using namespace std;

int main(){
    int n; cin >> n;
    ll a[100000];
    ll sumEven = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] % 2 == 0){
            sumEven += a[i];
            cnt++;
        }
    }
    double tb = (double)sumEven / cnt;
    for(int i = 0; i < n; i++)
        if(a[i] % 2 != 0 && a[i] > tb)
        cout << a[i] << " ";
    return 0;
}
