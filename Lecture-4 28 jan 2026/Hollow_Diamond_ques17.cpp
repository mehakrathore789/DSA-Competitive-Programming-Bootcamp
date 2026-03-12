#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin >> n;

int a = n/2;
int b = -1;
for(int i=1; i<=n; i++){
    for(int j=1; j<=a; j++){
        cout<<"* ";
    }
    for(int k=1; k<=b; k++){
        cout<<"  ";
    }
    for(int j=1; j<=a; j++){
        if (i==1 && j==a || i==n && j==a) 
        continue; 
        cout<<"* ";
    }
    if (i<=n/2){ 
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