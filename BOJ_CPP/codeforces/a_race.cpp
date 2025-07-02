#include <iostream>
  using namespace std;
#include <cstdlib>
#include <algorithm>
int main(){
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
  int a,x,y;
  cin>>a>>x>>y;
  int f1=abs(a-x);
  int f2=abs(a-y);
  if(((a<x&&a<y)||(a>x&&a>y))&&min(f1,f2)>1){
    cout<<"YES"<<endl;
  }
  else if(x==a||y==a){
    cout<<"NO"<<endl;
  }
  else if(((a<y&&a>x)||(a>y&&a<x))){
    cout<<"NO"<<endl;
  }
  else{
    cout<<"YES"<<endl;
  }
}
}
