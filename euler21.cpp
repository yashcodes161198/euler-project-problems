#include<iostream>
using namespace std;

int SumOfFactors(int a){
    // a=1184;
    int sum=0, dummy=0;
    for(int i=1; i<a; i++){
        if(a%i==0){
            dummy=a/i;
            if(dummy>i){
                sum+=i;
                sum+=dummy;
                    // cout<<a<<'*'<<sum<<endl;

            }
            else if(dummy==i){
                sum+=i;
            }
            else if(dummy<i){
                    sum-=a;
                    
    // cout<<a<<'*'<<sum<<endl;

                return sum;
            }
        }
    }
    sum-=a;
    // cout<<a<<'*'<<sum<<endl;
    return sum;
}

int main(){

int a,b,c, i=0, sum_of_amicable=0;
int arr[100000]={0};
int amicable_nos[500]={0};
for(a=1; a<10000; a++){
    arr[a]=SumOfFactors(a);
}
for(a=1; a<10000; a++){
    if(arr[arr[a]]==a && (arr[a])!=a){
        cout<<a<<endl;
        // amicable_nos[i++]=a;
        sum_of_amicable+=a;
    }
}
// for(int j=0; j<i; j++){
//     sum_of_amicable+=amicable_nos[j];
// }
cout<<"sum = "<<sum_of_amicable<<endl;

return 0;
}