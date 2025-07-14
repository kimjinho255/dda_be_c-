#include <bits/stdc++.h>
using namespace std;
int n;
int isused[50];
int isused2[50];
int isused3[50];
int cnt;
void func(int k){
if(k==n){
  cnt++;
  return;
}
for(int i=0;i<n;i++){
  if(isused[i]!=0||isused2[i+k]!=0||isused3[k-i+n-1]!=0)continue;
  isused[i]=1;
  isused2[i+k]=1;
  isused3[k-i+n-1]=1;
  func(k+1);
  isused[i]=0;
  isused2[i+k]=0;
  isused3[k-i+n-1]=0;
}
}
int main(){
  cin>>n;
  func(0);
  cout<<cnt<<'\n';
}

