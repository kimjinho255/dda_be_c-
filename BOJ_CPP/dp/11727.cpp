#include <iostream>
    using namespace std;
int main(){
    int n;
    cin>>n;
    long long int a[1001];
    a[1]=1;
    a[2]=3;
    for(int i=3;i<=n;i++){

        a[i]=(a[i-1]+2*a[i-2])%10007;

    }
    cout<<a[n];

}