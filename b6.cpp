#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
ll a[500000];

int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for(int i = 0; i < n; i+=3){
        if(a[i] != a[i+1] && a[i] != a[i+2]){
            cout << a[i];
            return 0;
        }
        else if(a[i+2] != a[i] && a[i+2] != a[i+1]){
            cout << a[i+2];
            return 0;
        }
    }
    return 0;
}
