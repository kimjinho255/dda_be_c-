#include <iostream>
#include<algorithm>
using namespace std;
int main(){
  int n;
  cin>>n;
  long long int a[1001];
  long long int dp[1001]={0};
  for(int i=1;i<=n;i++){
    cin>>a[i];
  }
  dp[0]=0;
  dp[1]=a[1];
  for(int i=2;i<=n;i++){
    for(int j=1;j<=i;j++){
      dp[i]=max(dp[i],dp[i-j]+a[j]);
    }
  }
  cout<<dp[n];
}