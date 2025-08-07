#include <iostream>
using namespace std;
namespace a{
    int add(int a,int b){
        return a+b;
    }
}
int ad(int a,int b){
    return a*b;
}
int main() {
  using namespace a;
  cout<<add(1,2)<<endl;
}