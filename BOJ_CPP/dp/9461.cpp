#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;
    long long int dp[101];
    dp[0]=0;
    dp[1]=1;
    dp[2]=1;
    dp[3]=1;
    dp[4]=2;
    dp[5]=2;
    dp[6]=3;
    dp[7]=4;
    dp[8]=5;
    dp[9]=7;
    dp[10]=9;
    dp[11]=12;
    for(int i = 12; i <= 100; i++){
        dp[i]=dp[i-1]+dp[i-5];
    }
    while(t--){
      int n;
      cin>>n;
      cout<<dp[n]<<endl;
    }
}