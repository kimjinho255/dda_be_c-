#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if(!(cin >> t)) return 0;
    while (t--) {
        string s; cin >> s;
        string t_block, rest;
        for (char c : s) {
            if (c == 'T') t_block += c;
        }
        for (char c : s) {
            if (c != 'T') rest += c;
        }
        cout << t_block + rest << '\n';
    }
    return 0;
}