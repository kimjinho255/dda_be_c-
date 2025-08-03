#include <bits/stdc++.h>
using namespace std;
int main(){
  long long int n,m,b;
  cin>>n>>m>>b;
  int arr[n*m];
  int t=0;
  int l=256;
  for(int i=0;i<n*m;i++){
    cin>>arr[i];
    t=max(t,arr[i]);
    l=min(l,arr[i]);
  }
 long long int res=LLONG_MAX;
 long long int resh=0;
for(long long int i=l;i<=t;i++){
  long long int time=0;
  long long int block=b;
  for(int j=0;j<n*m;j++){
    if(arr[j]>i){
      time+=2*(arr[j]-i);
      block+=arr[j]-i;
    }
    else if(arr[j]<i){
      time += i-arr[j];
      block -= i-arr[j];
    }
  }
  if(block>=0){
      if(time<res||(time==res&&i>resh)){
        res=time;
        resh=i;
      }
  }
}
cout<<res<<' '<<resh<<endl;
}