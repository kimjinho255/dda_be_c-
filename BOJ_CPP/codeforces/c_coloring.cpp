#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<long long> a(n+1);
    for(int i = 1; i <= n; i++){
      cin >> a[i];
    }

    long long count = 0;
    for(int k = 3; k <= n; k++){
      long long z = a[k];
      long long T = max( z, a[n] - z );
      int l = 1, r = k - 1;
      while(l < r){
        if(a[l] + a[r] > T){
          count += (r - l);
          --r;
        } else {
          ++l;
        }
      }
    }

    cout << count << "\n";
  }
  return 0;
}
