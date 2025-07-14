#include <bits/stdc++.h>
using namespace std;
int n,m;
int arr[10];
int a[10];
void func(int k){
    if(k==m){
        for(int i=0;i<m;i++){
            cout<<arr[i]<<' ';
        }
        cout<<'\n';
        return;
    }
    for(int i=0;i<n;i++){
        if(arr[k-1]>a[i])continue;
        arr[k]=a[i];
        func(k+1);
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