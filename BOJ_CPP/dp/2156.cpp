#include <iostream>
#include <algorithm>
using namespace std;
int main(){
int n;
cin>>n;
int a[10002];
int dp[10002];
for(int i=1;i<=n;i++){
  cin>>a[i];
}
dp[1]=a[1];
dp[2]=a[1]+a[2];
dp[3]=max(dp[2],max(a[1]+a[3],a[2]+a[3]));
int cnt=1;
for(int i=4;i<=n;i++){
  dp[i]=max(dp[i-1],max(dp[i-2]+a[i],dp[i-3]+a[i-1]+a[i]));


}
cout<<dp[n]<<endl;
}