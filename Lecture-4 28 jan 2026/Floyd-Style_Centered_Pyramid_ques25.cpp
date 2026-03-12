#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin >> n;
    int a=1;;

    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++)
            cout<<"   ";
        for(int j=1;j<=2*i-1;j++){
            if(a<10){
                cout<<a<<"  ";
            }
            else{
                cout<<a<<(" ");
            }
            a++;
        }
        cout<<endl;
    }
    return 0;
}