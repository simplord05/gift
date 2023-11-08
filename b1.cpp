#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int a[106];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int cnt = 0;
    for(int i = n-1; i >=0; i--)
        if(a[i] % 3 == 0 && (a[i] % 5 == 1 || a[i] % 5 == 2)){
            cout << a[i] << " ";
            cnt++;
        }
    if(cnt == 0)
        cout << "None";
    return 0;
}
