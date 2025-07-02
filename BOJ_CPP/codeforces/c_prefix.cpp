#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    long long a[200000];
    long long pm[200000];
    long long sm[200000];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }

    pm[0]=LLONG_MAX;
    for(int i=1;i<n;i++){
      pm[i]=min(pm[i-1], a[i-1]);
    }
    sm[n-1]=LLONG_MIN;
    for(int i=n-2;i>=0;i--){
      sm[i]=max(sm[i+1], a[i+1]);
    }
    char res[200001];
    res[n]='\0';
    res[0]='1';
    res[n-1]='1';
    for(int i=1;i<n-1;i++){
      if(pm[i]<a[i]&&sm[i]>a[i])
        res[i] = '0';
      else
        res[i] = '1';
    }
    cout << res << "\n";
  }

}
