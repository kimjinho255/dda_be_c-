#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
using namespace std;
typedef unsigned long long ull;
int main(){
  ull n,k;
  cin>>n>>k;
  k++;
  ull combi[51]={0};
   combi[0] = 1;
   vector<vector<long long>> dp(n + 1, vector<long long>(n + 1, 0));

  dp[0][0] = 0;
  for(int i=1;i<=n;i++){
    combi[i]=combi[i-1]*2;
    dp[i][0] = 1;
  }
  for(int i=1;i<=n;i++){
    dp[0][i]=combi[i-1]+dp[1][i-1];
    for(int j=1;j<=n-i;j++){
      dp[j][i]=dp[j-1][i-1]+dp[j+1][i-1];
    }
  }
  if((n%2==1&&k>combi[n])||(n%2==0&&k>dp[0][n])){
    cout<<"-1"<<endl;
    return 0;
  }
  int len=0;
  int leftcount=0;
  bool flag = (n % 2 == 1);
  while(len<n){
    if(flag){
      if(k>combi[n-len-1]){
        putchar(')');
        k -= combi[n - len - 1];
      }else{
        putchar('(');
        }
        }
    else{
        if(k>dp[leftcount+1][n-len-1]){
          putchar(')');
          k-=dp[leftcount+1][n-len-1];
          leftcount--;
      }
      else{
        putchar('(');
        leftcount++;
      }
    }
    if(!flag&&leftcount<0){
        flag=true;
    }
    len++;
  }
  return 0;
}