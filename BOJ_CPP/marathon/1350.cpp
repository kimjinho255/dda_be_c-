#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  unsigned long long int sum=0;
  unsigned long long int a[n];
  unsigned long long int c;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
cin>>c;

for(int i=0;i<n;i++){
  sum+=((a[i]+c-1)/c)*c;
}
cout<<sum<<endl;
}