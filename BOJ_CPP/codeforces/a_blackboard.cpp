#include <iostream>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    if(n%4==0){
      cout<<"Bob"<<endl;
    }
    else{
      cout<<"Alice"<<endl;
    }
  }
}