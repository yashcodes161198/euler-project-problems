#include<iostream>
#include<math.h>
using namespace std;

bool Is_Prime(int a){
    for(int i=2; i<=sqrt(a); i++){
        if(a%i==0)
        return false;
    }
    return true;
}

int main() {

    long long int a,b,sum=0,c;
    for(a=2; a<2000000; a++){
        if(Is_Prime(a)){
            sum+=a;
        }
    }
    cout<<sum<<endl;

return 0;
}