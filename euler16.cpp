#include<iostream>
#include<math.h>
using namespace std;

int main() {

int a,b=0;
int number[50000]={0};
number[0]=2;// int dummy[50000]={0};
for(int i=2; i<=1000; i++){
    for(int j=0 ;j<50000; j++){
        number[j]*=2;
    }
    for(int j=0 ;j<50000; j++){
        number[j+1]+=number[j]/10;
        number[j]=number[j]%10;
    }

}
for(int j=0 ;j<50000; j++){
        b+=number[j];
    }
    cout<<b;

return 0;
}