#include <iostream>
#include <stdlib.h>
#include <math.h>
/*이렇게 해봤는데 솔직히 낮은 단계에서는 반례가 없다시피 함 잘됨
근데 수 범위때문에 숫자가 커질수록 오류가 나는 것 같아서 다음에 다시 해 볼 예정
사실 범위 파악도 실력이고 범위 말고 다른 요소를 다 맞았다는 보장은 없지만
알고리즘 공부 좀 더 한 다음에 도전해볼 예정 ㅠㅠ */
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