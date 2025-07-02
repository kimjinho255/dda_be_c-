#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        bool zero = false;
        for(int i = 0; i + 1 < n; i++){
            if (abs(a[i] - a[i+1]) <= 1){
                zero = true;
                break;
            }
        }
        if (zero){
            cout << 0 << "\n";
            continue;
        }


        bool inc = true, dec = true;
        for(int i = 0; i + 1 < n; i++){
            if (a[i] >= a[i+1]) inc = false;
            if (a[i] <= a[i+1]) dec = false;
        }
        if (inc || dec){
            cout << -1 << "\n";
        }
        else {
            cout << 1 << "\n";
        }
    }
    return 0;
}
