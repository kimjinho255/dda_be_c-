#include  <bits/stdc++.h>
using namespace std;
int negu[10];
int weight[10];
int cnt=0;
int ans=0;
void func(int i,int k,int n){
  if(i==n){
    ans = max(ans, cnt);
    return;
  }
  if(k==n){
    bool Unbroken = false;
    for(int t=0; t<n; t++){
      if(t!=i && negu[t]>0){
        Unbroken = true;
        break;
      }
    }
    if(!Unbroken){
      func(i+1, 0, n);
    }
    return;
  }
  if(negu[i]==0){
    func(i+1, 0, n);
    return;
  }
  if(i==k) {
    func(i, k+1, n);
    return;
  }
  if(negu[k]==0) {
    func(i, k+1, n);
    return;
  }
  int old_ne_i = negu[i];
  int old_ne_k = negu[k];
  int old_cnt  = cnt;
  int broken=0;

  negu[i] -= weight[k];
  negu[k] -= weight[i];
  if(negu[i]<=0){
    negu[i]=0;
    broken++;}
  if(negu[k]<=0){
    negu[k]=0;
    broken++;}
  cnt+=broken;
  func(i+1, 0, n);
  negu[i] = old_ne_i;
  negu[k] = old_ne_k;
  cnt      = old_cnt;
  func(i, k+1, n);

}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>negu[i]>>weight[i];
  }
  func(0,1,n);
  cout<<ans<<endl;
}
