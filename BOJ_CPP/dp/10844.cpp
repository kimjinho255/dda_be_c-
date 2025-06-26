#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[101][10];
    for(int i=1;i<10;i++){
      a[1][i]=1;
    }
    for(int i=2;i<=n;i++){
      for(int j=0;j<=9;j++){
      if(j==0)a[i][j]=a[i-1][j+1];
      else if(j==9)a[i][j]=a[i-1][j-1];
      else a[i][j]=a[i-1][j+1]+a[i-1][j-1];
      a[i][j]=a[i][j]%1000000000;
      }
    }
    int k=0;
    for(int i=0;i<10;i++){
      k=(k+a[n][i])%1000000000;
    }
    cout<<k<<endl;
}