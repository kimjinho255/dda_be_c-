#include <iostream>
#include <string>
using namespace std;
int main(){
 string a;
 int n;
 int sum=0;
 cin>>n>>a;
 for (int i=0;i<n;i++){
   sum+=(int)a[i]-48;
 }
 cout<<sum<<endl;
 return 0;
}