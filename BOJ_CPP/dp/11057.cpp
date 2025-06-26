#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1001][10];
    for(int i=0;i<10;i++){
        a[1][i]=1;
    }
    for(int i=2;i<=n;i++){
        for(int j=0;j<=9;j++){
          if(j==0){
            a[i][j]=1;
            continue;
          }
            a[i][j]=a[i-1][j]+a[i][j-1];
            a[i][j]%=10007;
        }
    }
    int k=0;
    for(int i=0;i<10;i++){
        k=(k+a[n][i])%10007;
    }
    cout<<k<<endl;
}