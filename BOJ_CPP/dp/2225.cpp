#include <iostream>
using namespace std;
int main(){
  int n,k;
  cin>>n>>k;
  long long dp[201][201]={0};
  for(int i=0;i<201;i++){
    dp[1][i]=1;
  }
  for(int K=2;K<=k;K++){
    for(int N=0;N<=n;N++){
      for(int i=0;i<=N;i++){
        dp[K][N]+=dp[K-1][i];

      }
      dp[K][N]%=1000000000;
    }
  }
  cout<<dp[k][n]<<endl;
}