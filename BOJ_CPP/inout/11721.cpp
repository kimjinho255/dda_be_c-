#include <iostream>
#include <string>
using namespace std;
int main(){
    string a;
    cin>>a;
    for (int i=0;i<a.length();i+=10){
      cout<<a.substr(i,10)<<endl;
    }

    return 0;
}