#include<iostream>
using namespace std;

int main() {

    long long a, b,i,j, counter=1;
    cin>>a;
    for(i=a; i>=2; i--){
        for(j=2; j<i; j++){
            if(i%j==0)
            break;
        }
        if(j==i){
        cout<<i<<endl;
    return 0;
        }
    }
// return 0;
}