#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[1001];
  int dp[1001][3];
  for (int i=1;i<=n;i++){
    cin>>a[i];
  }
  for(int i=1;i<=n;i++){
    dp[i][0]=1;
    dp[i][1]=1;
    dp[i][2]=1;
  }
  int res=1;
  for(int i=1;i<=n;i++){
    for(int j=1;j<i;j++){
      if(a[i]>a[j]){
        dp[i][0]=max(dp[j][0]+1,dp[i][0]);
     }

     else if((a[i]<a[j])){
       dp[i][1]=max(dp[j][1]+1,dp[i][1]);
       dp[i][1]=max(dp[i][1],dp[j][0]+1);
     }

    }
    res=max(res,dp[i][1]);
    res=max(res,dp[i][0]);
  }
  cout<<res<<endl;
}