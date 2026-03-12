#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a grade:";
    cin>>x;
    if(x>=91 && x<=100) {
        cout<<("Grade A");
    }
    else if(x>=71 && x<=80) {
            cout<<("Grade B");
        }else if(x>=61 && x<=70) {
                cout<<("Grade C");
            }else if(x>=41 && x<=60) {
                    cout<<("Grade D");
                }else{
                    cout<<("Fail");
                }
    return 0;
}