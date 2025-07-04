#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  long long int n;
  cin>>n;
  long long int a[n+1];
  long long int dp[n+1][2];
  long long int mx[n+1];
  for(int i = 1; i <= n; i++){
    cin>>a[i];
  }
  dp[1][0] = a[1];
  dp[1][1] = 0;
mx[1] = a[1];
if(n>=2){
  dp[2][0] = a[2];
  dp[2][1] = a[2]+a[1];
mx[2] = a[2]+a[1];
}
  for(int i = 3; i <= n; i++){
    dp[i][1]=dp[i-1][0]+a[i];
    dp[i][0]=max(dp[i-2][1]+a[i],dp[i-2][0]+a[i]);
    mx[i]=max(dp[i][0],dp[i][1]);
  }

  cout<<mx[n]<<endl;
}