#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int t;
  cin >> t;
  int n;
  int a[2][100001];
  int m[2][100001];
  while (t--) {
    cin >> n;
    for (int i = 0; i < 2; i++) {
      for (int j = 0; j < n; j++) {
        cin >> a[i][j];
      }
    }

    m[0][0] = a[0][0];
    m[1][0] = a[1][0];

    if (n >= 2) {
      m[0][1] = m[1][0] + a[0][1];
      m[1][1] = m[0][0] + a[1][1];
    }

    for (int i = 2; i < n; i++) {
      m[0][i] = max(m[1][i - 1], m[1][i - 2]) + a[0][i];
      m[1][i] = max(m[0][i - 1], m[0][i - 2]) + a[1][i];
    }

    cout << max(m[0][n - 1], m[1][n - 1]) << endl;
  }
  return 0;
}
