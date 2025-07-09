#include <bits/stdc++.h>
#include <cmath>
using namespace std;
void hanoi(int a,int b,int n){
  if(n==1){
    cout<<a<<" "<<b<<'\n';
    return;
    }
  else{
    hanoi(a,6-a-b,n-1);
    cout<<a<<" "<<b<<'\n';
    hanoi(6-a-b,b,n-1);
  }
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin>>n;
  long long k=(1LL<<n)-1;
  cout<<k<<'\n';
  hanoi(1,3,n);
}