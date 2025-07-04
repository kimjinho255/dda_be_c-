#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int n;
  cin >> n;
  int dp[n+1];
  for(int i = 1; i <= n; i++){
    dp[i]=100000001;
  }
  dp[0]=0;
  for(int i = 1; i <= n; i++){
    for(int j = 1; j*j <= i; j++){
      dp[i] = min(dp[i], dp[i-j*j]+1);
    }
  }

  cout << dp[n] << endl;
}