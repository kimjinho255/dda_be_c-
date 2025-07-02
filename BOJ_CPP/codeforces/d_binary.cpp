#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        string s;cin>>s;
        vector<int> pr(n+1,0);
        for(int i=0;i<n;i++)pr[i+1]=pr[i]+(s[i]=='1');
        int tot=pr[n],mx=0;
        for(int i=0;i+k<=n;i++){
            int inside=pr[i+k]-pr[i];
            mx=max(mx,inside);
        }
       if(tot-mx<k)cout<<"Alice\n";
        else cout<<"Bob\n";
    }
    return 0;
}
