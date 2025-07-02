#include <iostream>
#include <stdlib.h>
#include <math.h>

typedef unsigned long long ull;

using namespace std;
void bit_print(ull a,ull b){
  ull i;
  ull n=b;
  ull mask=1<<(n-1);
  for (i=1;i<=n;++i){
    putchar(((a&mask)==0)?'(':')');
    a<<=1;
  }
}

const unsigned long long MAX = 99999999;
unsigned long long dp[MAX];

void catalanDP(int n) {
  dp[0] = 1;

  for (int i = 1; i <= n; ++i) {
    dp[i] = 0;
    for (int j = 0; j < i; ++j) {
      dp[i] += dp[j] * dp[i - 1 - j];
    }
  }
}

int main(){
  long long int n,k;
  cin>>n>>k;
  long long int en=pow(2,n);
  if(n%2!=0||k==0){
    if(k>en){
      printf("-1");
      return 0;
      }
    bit_print(k,n);
  }
  else {
    catalanDP(n/2);
    k=k+dp[n/2];
    if(k>en){
      printf("-1");
      return 0;
    }
    bit_print(k,n);
  }
  return 0;
}