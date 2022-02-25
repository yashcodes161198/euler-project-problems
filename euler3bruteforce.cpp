#include<iostream>
#include<math.h>
using namespace std;

bool Prime_Check(long long x){
    for(long long i=2; i<=sqrt(x); i++){
        if(x%i==0)
            return false;
    }
    return true;
}

int main() {

    long long a, b, counter=1;
    cin>>a;
    long long *arr;
    arr = new long long[300];
    arr[0]=1;
    for(long long i=2; i<=a; i++){
        if(a%i==0)
            arr[counter++]=i;
    }
    // cout<<arr[counter-1];
    // cout<<arr[counter-2];
    // cout<<arr[counter-3];
    for(long long j=counter-1; j>=0; j--){
        if(Prime_Check(arr[j])){
            cout<<arr[j]<<endl;
            return 0;
        }
    }

return 0;
}