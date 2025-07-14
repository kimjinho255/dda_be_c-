#include <bits/stdc++.h>
using namespace std;
int k;
int a[49];
int arr[49];
void func(int how, int s){
  if(how==6){
    for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return;
  }
  for(int i=s;i<k;i++){
    arr[how]=a[i];
    func(how+1,i+1);
  }
}
int main(){

  while(true){
    cin>>k;
    if(k==0)break;
    for(int i=0;i<k;i++){
      cin>>a[i];
    }
    func(0,0);
    cout<<"\n";
  }
}
