#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    if(num%2==0){
        cout<<"It's a even number";
    }
    else{
        cout<<"It's a odd number";
    }
    return 0;
}