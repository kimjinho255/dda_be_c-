#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[12];
    a[1]=1;
    a[2]=2;
    a[3]=4;
    for(int i=4;i<=11;i++){

        a[i]=a[i-1]+a[i-2]+a[i-3];

    }
    int k;
    for (int i=0;i<n;i++){
      cin>>k;
      cout<<a[k]<<"\n";
    }

}