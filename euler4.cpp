#include<iostream>
using namespace std;

bool Product_Is_Palindrome(int x, int y){
    int z = x*y, dummy=0;
    while(z>0){
        dummy=dummy*10 +(z%10);
        z/=10;
    }
    if(dummy==(x*y))
    return true;
    else
    return false;
}

int main() {

int a,b,c=0;
bool ans;
for(a=999; a>99; a--){
    for(b=999; b>99; b--){
        ans = Product_Is_Palindrome(a, b);
        if (ans && c<(a*b)){
            c=a*b;
            // cout<<a*b<<endl<<a<<endl<<b;
            // return 0;
        }
    }
}
// ans = Product_Is_Palindrome(913, 993);
cout<<c;
    

return 0;
}