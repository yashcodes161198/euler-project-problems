#include<iostream>
using namespace std;

int main() {

    int matrix[20][20];
    int a,b,c,d,i,j;
    long long int product, dummy;
    for(a=0; a<20; a++){
        for(b=0; b<20; b++){
            cin>>matrix[a][b];
        }
    }
    product=dummy=0;
    for(b=0; b<17; b++){
        for(c=0; c<20; c++){
            product=(matrix[c][b]*matrix[c][b+1]*matrix[c][b+2]*matrix[c][b+3]);
            if(product>dummy){
            dummy=product;
            i=c;    j=b;
            }
            product=(matrix[b][c]*matrix[b+1][c]*matrix[b+2][c]*matrix[b+3][c]);
            if(product>dummy){
            dummy=product;
            i=c;    j=b;
            }
        }
    }
    for(b=0; b<17; b++){
        for(c=0; c<17; c++){
            product=(matrix[c][b]*matrix[c+1][b+1]*matrix[c+2][b+2]*matrix[c+3][b+3]);
            if(product>dummy){
            dummy=product;
            i=c;    j=b;
            }
            product=(matrix[19-c][b]*matrix[18-c][b+1]*matrix[17-c][b+2]*matrix[16-c][b+3]);
            if(product>dummy){
            dummy=product;
            i=c;    j=b;
            }
        }
    }
        cout<<dummy<<endl;


    // for(a=0; a<20; a++){
    //     for(b=0; b<20; b++){
    //         cout<<matrix[a][b]<<' ';
    //     }
    //     cout<<endl;
    // }

return 0;
}