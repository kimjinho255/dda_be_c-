#include <bits/stdc++.h>
using namespace std;
int v(int n,int r, int c){
  if(n==0)return 0;
  long long b=1<<(n-1);
  if(r<b && c<b)return v(n-1,r,c);
  if(r<b&&c>=b)return b*b+v(n-1,r,c-b);
  if(r>=b&&c<b)return 2*b*b+v(n-1,r-b,c);
  else return 3*b*b+v(n-1,r-b,c-b);
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long int n,r,c;
  cin>>n>>r>>c;
  cout<<v(n,r,c)<<'\n';
}