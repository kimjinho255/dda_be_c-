#include <bits/stdc++.h>
using namespace std;
int main(){
  long int n,k;
  cin>>n>>k;
  long int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int res=0;
  for(int i=n-1;i>=0;i--){
    if(k>=arr[i]){
      res+=(k/arr[i]);
      k%=arr[i];
    }
    if(k==0)break;
  }
  cout<<res<<endl;
}