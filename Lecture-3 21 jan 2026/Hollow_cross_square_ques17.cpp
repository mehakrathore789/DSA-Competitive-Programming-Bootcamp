/*#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number";          //give a input 7 kyuki fir ye galat output dega
    cin >> n;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {

            if(
               (i == 1 && (j <= 3 || j >= 5)) ||
               (i == 2 && (j <= 2 || j >= 6)) ||
               (i == 3 && (j == 1 || j == 7)) ||
               (i == 5 && (j == 1 || j == 7)) ||
               (i == 6 && (j <= 2 || j >= 6)) ||
               (i == 7 && (j <= 3 || j >= 5))
              )
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int a =n/2;   
    int b =1;      

    for(int i=1; i<=n; i++){
        for(int j=1; j<=a; j++){
            cout<<"* ";
        }
        for(int k=1; k<=b; k++){
            cout<<"  ";
        }
        for(int j=1; j<=a; j++) {
            cout<<"* ";
        }
        if (i<=n/2) { 
            a--; 
            b += 2; 
        } 
        else{ 
            a++; 
            b -= 2; 
        }

        cout<<endl;
    }

    return 0;
}
