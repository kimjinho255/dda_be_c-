#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  long long a[100001];
  long long dp[100001];

  for(int i = 1; i <= n; i++){
    cin >> a[i];
  }

  dp[1] = a[1];
  long long res = dp[1];

  for(int i = 2; i <= n; i++){
    dp[i] = max(a[i], dp[i-1] + a[i]);
    res = max(res, dp[i]);
  }

  cout << res << "\n";
  return 0;
}
