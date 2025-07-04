#include <iostream>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin>>n;
  if(n%2==1){
      cout<<"0"<<endl;
      return 0;
    }
  int dp[31];
  for(int i = 1; i <= n; i++){
    dp[i]=0;
  }
  dp[0]=1;
  dp[1]=0;
  dp[2]=3;
  for(int i = 4; i <= n; i++){
      dp[i]=dp[i-2]*3;
      for(int j = 4; j <= i; j+=2){
        dp[i]+=dp[i-j]*2;

    }
  }
  cout<<dp[n];
}