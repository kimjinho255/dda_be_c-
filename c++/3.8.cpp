#include <iostream>
#include <bitset>
using namespace std;
int main(){
  unsigned int a=3;
  cout<<bitset<4>(a)<<endl;
  unsigned int b=a<<1;
  cout<<bitset<4>(b)<<endl;
  unsigned int c=0b0110;
  cout<<bitset<4>((c>>2))<<endl;

}