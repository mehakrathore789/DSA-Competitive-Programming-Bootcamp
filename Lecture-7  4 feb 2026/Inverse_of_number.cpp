#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int pos=1, inv=0;
    while(n>0){
        int d = n%10;
        int p = 1;
        for(int i=1;i<d;i++)
            p = p*10;
        inv = inv + pos*p;
        pos++;
        n = n/10;
    }
    cout<<inv;
	return 0;
}