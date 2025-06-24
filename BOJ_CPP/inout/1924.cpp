#include <iostream>
#include <string>
using namespace std;

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int date;
    if (a==1){
      date=b;
    }
    else if (a==2){
      date=b+31;
    }
    else{
      date= 31*(a-1)-(a-1)/2-2+b;
    }
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
