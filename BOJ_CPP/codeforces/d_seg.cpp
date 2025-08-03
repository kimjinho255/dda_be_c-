#include <bits/stdc++.h>
using namespace std;
const int MOD=998244353;
long long modpow(long long a,long long e){
    long long r=1;
    while(e){
        if(e&1)r=r*a%MOD;
        a=a*a%MOD;
        e>>=1;
    }
    return r;
}
struct Seg{int l,r;long long w;};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;cin>>n>>m;
    vector<Seg> segs(n);
    vector<vector<int>> byL(m+2);
    long long S=1;
    for(int i=0;i<n;i++){
        int l,r;long long p,q;
        cin>>l>>r>>p>>q;
        long long invq=modpow(q,MOD-2);
        long long P=p%MOD*invq%MOD;
        long long NP=(1-P+MOD)%MOD;
        S=S*NP%MOD;
        long long w=P*modpow(NP,MOD-2)%MOD;
        segs[i]={l,r,w};
        byL[l].push_back(i);
    }
    vector<long long> dp(m+2);
    dp[m+1]=1;
    for(int x=m;x>=1;--x){
        long long cur=0;
        for(int id:byL[x])cur=(cur+segs[id].w*dp[segs[id].r+1])%MOD;
        dp[x]=cur;
    }
    cout<<dp[1]*S%MOD<<'\n';
    return 0;
}
