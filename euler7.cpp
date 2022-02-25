#include<iostream>
using namespace std;

int main() {

int counter=0, a=1, i;
bool is_prime = false;
for(a=1; ; a++){
    for(i=2; i<a; i++){
        if(a%i==0)
        break;
    }
    if(i==a){
        counter++;
        if(counter==10001){
            cout<<i;
            return 0;
        }
    }
}

return 0;
}