#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=0; i<n; i++){
        for(int k=0; k<n-i-1; k++){
            cout<<"  ";
        }
        for(int j=n-i; j<=n-1; j++){
            cout<<j<<" ";
        }
        cout<<"0 ";
        for(int j=n-1; j>=n-i; j--) {
            cout<<j<<" ";
        }

        cout<<endl;
    }
    return 0;
}