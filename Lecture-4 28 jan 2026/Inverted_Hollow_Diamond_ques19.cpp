#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin >> n;

int a = (n/2)+1;

for(int i=1; i<=a; i++){
    for(int j=1; j<=a-i+1; j++){
       cout<<"* ";
    }
    for(int k=1; k<=2*i-3; k++){
         cout<<"  ";
    }
    for(int j=1; j<=a-i+1; j++){
        if(i==1 && j==1){
        continue;
        cout << "* ";
        }
    }
    cout<<endl;
}

for(int i=a-1; i>=1; i--){
    for(int j=1; j<=a-i+1; j++){
         cout << "* ";
    }
    for(int k=1; k<=2*i-3; k++){
         cout << "  ";
    }
    for(int j=1; j<=a-i+1; j++){
        if(i==1 && j==1){
        continue;
        cout<<"* ";
        }
    }
    cout<<endl;
}
return 0;
}