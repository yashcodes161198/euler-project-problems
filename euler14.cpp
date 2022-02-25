#include<iostream>
using namespace std;

int main() {
int a,b=1,c=0,d;
long long x=0, y=1, z=0;
for(a=2; a<1000000; a++){
    x=a;
    b=1;
    while(x!=1){
        if(x%2==0){
            x=x/2;
            b++;
        }
        else if(x%2==1){
            x=3*x+1;
            b++;
        }
    }
    // cout<<y<<'*'<<x<<endl;
    // cout<<b<<endl;
    if(b>c){
        c=b;
        y=a;
    }
}
cout<<y<<endl;


return 0;
}