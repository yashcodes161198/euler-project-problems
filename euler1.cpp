#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

// int SumOfMultiples(int x){
//     int sum=0;
//     for(int y=1; y<x; y++){
//         if(y%3==0 || y%5==0){
//             sum+=y;
//         }
//     }
//     return sum;
// }

int main(){

int a, sum=0;
cin>>a;
int arr[a];
for(int i=0; i<a; i++){
    cin>>arr[i];
}
int x, y, z, sum3, sum5, sum15; 
for(int i=0; i<a; i++){
    x=y=z=0;
    sum=sum3=sum5=sum15=0;
    x=(arr[i]-1)%3;
    y=(arr[i]-1)%5;
    z=(arr[i]-1)%15;
    sum3=((arr[i]-1-x)/3)*((arr[i]-1-x)/3+1)*3/2;
    sum5=((arr[i]-1-x)/5)*((arr[i]-1-x)/5+1)*5/2;
    sum15=((arr[i]-1-x)/15)*((arr[i]-1-x)/15+1)*15/2;
    // x=(arr[i]-1)/3;
    // y=(arr[i]-1)/5;
    // z=(arr[i]-1)/15;
    // sum3=3*x*(x+1)/2;
    // sum5=5*x*(y+1)/2;
    // sum15=15*x*(z+1)/2;
    sum=sum3+sum5-sum15;
    cout<<sum<<endl;
}


// for(int i=0; i<a; i++){
//     sum=0;
//     for(int y=1; y<arr[i]; y++){
//         if(y%3==0 || y%5==0){
//             sum+=y;
//         }
//     }
//     cout<<sum<<endl;
// }
// cout<<a;
// cout<<arr[0]<<endl<<arr[1]<<endl<<arr[2];

return 0;
}