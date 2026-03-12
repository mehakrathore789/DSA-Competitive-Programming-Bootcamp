#include<iostream>
using namespace std;

int main(){
    int binary=0, decimal, base=1;
    cin>>decimal;
    while(decimal>0){
        decimal = decimal%2;
        binary = binary+decimal*base;
        decimal = decimal/2;
    }
    cout<<binary;
    return 0;
}