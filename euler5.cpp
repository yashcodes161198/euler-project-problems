#include<iostream>
using namespace std;

int main() {

    int a,b,c;
    a=1*2*3*5*7*11*13*17*19;
    for(int i=1; ; i++){
        b=i*a;
        c=0;
        while(++c<=20){
            if(b%c!=0)
            break;
        }
        if(c==21){
            cout<<b;
            return 0;
        }

    }


return 0;
}