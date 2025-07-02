#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  long long int t,n,j,k;
  cin>>t;
  while(t--){
    cin>>n>>j>>k;
    long long a[n+1];
    for (int i = 1; i <= n; i++){
      cin>>a[i];
    }
    if(k>=2){
      cout<<"YES"<<endl;
    }
    else{
      long long mx = *max_element(a+1, a+n+1);
      if(a[j]==mx){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
  }
}