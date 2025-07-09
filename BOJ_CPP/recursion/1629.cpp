#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
ull mo(ull a,ull b,ull c){
if(b==1)return a%c;
  if(b%2==1){
    return a*mo(a,b-1,c)%c;
  }
  else{
    return mo(a,b/2,c)*mo(a,b/2,c)%c;
  }
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  ull a,b,c;
  cin>>a>>b>>c;
  cout<<mo(a,b,c)<<endl;
}
