#include <iostream>
using namespace std;
int main(){
  int a[10];
  int b[10];
  int win[10];
for(int i=0;i<10;i++){
  cin>>a[i];
}
for(int i=0;i<10;i++){
  cin>>b[i];
}
for(int i=0;i<10;i++){
  if(a[i]>b[i]){
    win[i]=1;
  }
  else if(a[i]<b[i]){
    win[i]=0;
  }
  else if(a[i]==b[i]){
    win[i]=-1;
  }
}
int cnta=0;
int cntb=0;
for(int i=0;i<10;i++){
  if(win[i]==1){
    cnta++;
  }
  else if(win[i]==0){
    cntb++;
  }
  else if(win[i]==-1){
    continue;
  }
}
if(cnta>cntb){
  cout<<"A"<<endl;
  return 0;
}
else if(cnta<cntb){
  cout<<"B"<<endl;
  return 0;
}
else if(cnta==cntb){
  cout<<"D"<<endl;
}
}