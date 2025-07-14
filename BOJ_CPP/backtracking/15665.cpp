#include <bits/stdc++.h>
using namespace std;
int n,m;
int arr[10];
int a[10];
int isused[10];
void func(int k){
    if(k==m){
        for(int i=0;i<m;i++){
            cout<<arr[i]<<' ';
        }
        cout<<'\n';
        return;
    }
    int prev=-1;
    for(int i=0;i<n;i++){
        if(a[i]==prev)continue;
        arr[k]=a[i];
        prev=a[i];
        isused[i]=1;
        func(k+1);
        isused[i]=0;
    }
}
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    func(0);
}