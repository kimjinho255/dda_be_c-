#include <bits/stdc++.h>
using namespace std;
int main(){
  int cnt=1;
  int n;
  int a,b;
  cin>>n>>a>>b;
  if(a>b)swap(a,b);
  while(n!=1){
    if((b-a==1)&&(b%2==0)){
          cout<<cnt<<endl;
          return 0;
    }
    if(n%2==0)n/=2;
    else n=n/2+1;
    if(a%2==0)a=a/2;
    else a=a/2+1;
    if(b%2==0)b/=2;
    else b=b/2+1;
    cnt++;
  }
  cout<<-1<<endl;
}