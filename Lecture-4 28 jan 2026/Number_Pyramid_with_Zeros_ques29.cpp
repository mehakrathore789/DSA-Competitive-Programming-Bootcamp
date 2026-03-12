#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int k=1; k<=n-i; k++){
            cout<<"  ";
        }
        cout<<i<<" ";

        if(i>1){
            for(int j=1; j<=(2*i-3); j++){
                cout<<"0 ";
            }
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
