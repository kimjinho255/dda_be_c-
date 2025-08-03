#include <bits/stdc++.h>
    using namespace std;

long long good(long long x) {
    if (x <= 0) return 0;
    long long bad = 0;
    bad += x/2 + x/3 + x/5 + x/7;
    bad -= x/6  + x/10 + x/14 + x/15 + x/21 + x/35;
    bad += x/30 + x/42 + x/70 + x/105;
    bad -= x/210;
    return x - bad;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        long long l, r;
        cin >> l >> r;
        cout << good(r) - good(l - 1) << '\n';
    }
    return 0;
}
