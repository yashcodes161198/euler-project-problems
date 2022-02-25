#include<iostream>
using namespace std;

int main() {

    int a,b,c,d;
    for(a=1; a<1000; a++){
        for(b=a; b<1000; b++){
        c=1000-(a+b);
            if(c*c==(a*a+b*b)){
                cout<<a<<endl<<b<<endl<<c<<endl<<a*b*c<<endl;
                return 0;
            }
            }
        }
    

return 0;
}