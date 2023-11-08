#include <iostream>
#define ll long long
using namespace std;

int main(){
    int n; cin >> n;
    ll a[106];
    bool tang = false;
    bool giam = false;
    bool tg = false;
    bool gt = false;
    int cnt = 0;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 1; i < n; i++){
        if(a[i] > a[i-1] && !giam){
            tang = true;
            cnt++;
        }
        else if(tang && a[i] < a[i-1]){
            tg = true;
            cnt++;
        }
        if(a[i] < a[i-1] && !tang){
            giam = true;
            cnt++;
        }
        else if(giam && a[i] > a[i-1]){
            gt = true;
            cnt++;
        }
        if(i == n-1 && cnt == n-1 && tg){
            cout << "Loi";
            return 0;
        }
        else if(i == n-1 && cnt == n-1 && gt){
            cout << "Lom";
            return 0;
        }
    }
    cout << "Vo danh";
    return 0;
}
