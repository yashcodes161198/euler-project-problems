#include<iostream>
using namespace std;

int main() {

    int a, b, sum=2;
    cin>>a;
    int arr[10000];
    arr[0]=1;
    arr[1]=2;
    for(int i=2; ; i++){
        arr[i]=arr[i-1]+arr[i-2];
        if(arr[i]>=a) 
            break;
        if(arr[i]%2==0)
            sum+=arr[i];

    }
    cout<<sum<<endl;

return 0;
}