#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
  string n;
  cin>>n;
  long long a[5001];
  long long dp[5001]={0};
  int len=n.length();
  for(int i=1;i<=len;i++){
    a[i]=n[i-1]-'0';
  }
  if(a[1]==0){
    cout<<"0"<<endl;
    return 0;
  }
  dp[0]=1;
  dp[1]=1;
  for(int i=2;i<=len;i++){
    if(a[i]!=0){
      dp[i]+=dp[i-1];
      }
      int k=a[i]+a[i-1]*10;
      if(k>=10&&k<=26){
        dp[i]+=dp[i-2];
        dp[i]%=1000000;
      }
      else if(a[i]==0){
        cout<<"0"<<endl;
        return 0;
      }

  }
  cout<<dp[len]<<endl;
}