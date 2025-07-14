#include <bits/stdc++.h>
using namespace std;
int cnt=0;
int board[22];
int n,s;

void func(int k,int sum){
  if(k==n){
    if(sum==s)cnt++;
    return;
  }
  func(k+1,sum);
  func(k+1,sum+board[k]);
  }

int main(){
  cin>>n>>s;
  for(int i=0;i<n;i++){
    cin>>board[i];
  }
  func(0,0);
  if(s==0)cnt--;
  cout<<cnt<<endl;
}