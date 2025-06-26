#include <iostream>
#include <string>
using namespace std;

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int date;
    for(int i=0;i<a-1;i++){
      if(i==0||i==2||i==4||i==6||i==7||i==9||i==11){
        date+=31;
      }
      else if(i==3||i==5||i==8||i==10){
        date+=30;
      }
      else{
        date+=28;
      }
    }
    date+=b;
    if (date%7==0){
      cout<<"SUN"<<endl;
    }
    else if (date%7==1){
      cout<<"MON"<<endl;
    }
    else if (date%7==2){
      cout<<"TUE"<<endl;
    }
    else if (date%7==3){
      cout<<"WED"<<endl;
    }
    else if (date%7==4){
      cout<<"THU"<<endl;
    }
    else if (date%7==5){
      cout<<"FRI"<<endl;
    }
    else if (date%7==6){
      cout<<"SAT"<<endl;
    }
    return 0;
}
