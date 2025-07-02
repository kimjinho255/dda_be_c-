#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> cnt(n+1,0);
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            cnt[a]++;
        }

        vector<int> missing(n+1,0);
        for(int m=1;m<=n;m++){
            missing[m]=missing[m-1]+(cnt[m-1]==0);
        }

        vector<int> diff(n+2,0);
        for(int m=0;m<=n;m++){
            if(missing[m]==0){
                int l=cnt[m];
                int r=n-m;
                if(l<=r){
                    diff[l]++;
                    diff[r+1]--;
                }
            }
        }

        vector<int> ans(n+1,0);
        int cur=0;
        for(int k=0;k<=n;k++){
            cur+=diff[k];
            ans[k]=cur;
        }
        for(int k=0;k<=n;k++){
            cout<<ans[k]<<(k==n?'\n':' ');
        }
    }
}

