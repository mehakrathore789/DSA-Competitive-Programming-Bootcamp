#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n; 

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        if(i != n){
            for(int k=1; k<=2*(n-i)-1; k++){
                cout<<"  ";
            }
            cout<<"* ";
        }
        for(int j=1; j<=i-1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
