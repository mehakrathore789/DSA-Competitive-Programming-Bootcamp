#include <iostream>
using namespace std;
int main(){
    int arr[5] = {1, 2, 6, 8, 9};

    int max = arr[0];
    int second_max = -1;

    for(int i=1; i<5; i++){
        if(arr[i] > max){
            second_max = max;
            max = arr[i];
        }
    }
    cout << "Second maximum element is: " << second_max << endl;
    return 0; 
}