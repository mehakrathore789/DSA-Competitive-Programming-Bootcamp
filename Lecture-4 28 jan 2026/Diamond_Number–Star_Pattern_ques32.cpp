#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int total = 2*n-1;

    for(int i=1; i<=total; i++){
        int a;
        if(i<=n)
            a=i;
        else
            a=2*n-i;
        for(int j=1; j<=a; j++){
            cout<<a;
            if(j<a){
               cout << " * ";
            }
        }
        cout<<endl;
    }
    return 0;
}
