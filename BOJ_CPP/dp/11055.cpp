#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1001];
    int dp[1001];
    for (int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        dp[i]=a[i];
    }
    int res=a[1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            if(a[i]>a[j]){
                dp[i]=max(dp[i],dp[j]+a[i]);
            }
        }
        res=max(res,dp[i]);
    }
    cout<<res<<endl;
}
