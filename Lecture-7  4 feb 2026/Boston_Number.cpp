#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int temp=n, sum1=0, sum2=0;

    while(temp>0){
        sum1 += temp%10;
        temp/=10;
    }

    temp = n;

    for(int i=2;i<=temp;i++){
        while(temp%i==0){
            int x=i;
            while(x>0){
                sum2 += x%10;
                x/=10;
            }
            temp/=i;
        }
    }

    if(sum1==sum2)
        cout<<"1";
    else
        cout<<"0";

    return 0;
}