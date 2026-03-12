#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for (int i=1; i<=n; i++){
        
        for(int k=n; k>=i; k--){
            cout<<"  *  ";
        }
        cout << "\n";
    }
    for (int i=1; i<=n; i++){

        for(int k=1; k<=i; k++){
            cout<<"  *  ";
        }
        cout << "\n";
    }
    return 0;
}