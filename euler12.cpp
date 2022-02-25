#include<iostream>
using namespace std;

int PrimeFactorization(int a){
    int b,c,d, factor_number=0;
    int factors[50000]={0};
    c=a;
    for(b=2; b<=c; b++){
        factors[factor_number]=0;
        while(c%b==0){
            c/=b;
            factors[factor_number]++;
        }
        // cout<<c<<'*'<<endl;
        factor_number++;
    }
            // cout<<factor_number<<'*'<<factors[factor_number]<<'*'<<endl;

    int Total_No_Of_Factors=1;
    for(int i=0; i<factor_number; i++){
        Total_No_Of_Factors*= (factors[i]+1);
    }
        cout<<Total_No_Of_Factors<<endl;

    return Total_No_Of_Factors;
}



int NumberOfFactors(int a){
    int counter=0;
    for(int i=1; i<=a; i++){
        if(a%i==0){
        
        counter++;
    }
}
    // cout<<counter<<endl;
    return counter;
}


int main() {

int a,b=0,c=0,d;
for(a=1; ; a++){
    c+=a;
    // cout<<c<<endl;
    b=PrimeFactorization(c);
    if(b>500){
    cout<<c<<endl;
    return 0;
    }
}


return 0;
}