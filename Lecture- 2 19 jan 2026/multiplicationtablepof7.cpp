#include<iostream>
using namespace std;
int main(){
    cout<<("Table of 7:\n");
    for(int i=7; i<=70; i++){
        if(i%7==0){
            cout<<"\n"<<i;
        }
    }
    return 0;
}