#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
  int n;
  cin>>n;
  map<string,int> mp;
  string cloth,type;
  for(int i=0;i<n;i++){
    cin>>cloth>>type;
    mp[type]++;
  }
  int res=1;
  for(auto k=mp.begin();k!=mp.end();++k){
    res*=(k->second+1);
  }
  res--;
  cout<<res<<'\n';
  }
}