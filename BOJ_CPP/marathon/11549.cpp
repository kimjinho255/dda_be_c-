#include <iostream>
using namespace std;
int tea[5];
int main(){
  int k;
  cin>>k;
  for(int i=0;i<5;i++){
    int a=0;
    cin>>a;
    tea[a]+=1;
  }
  cout<<tea[k]<<endl;
}