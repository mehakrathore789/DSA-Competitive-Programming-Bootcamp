#include <iostream>
using namespace std;
int main() {
    int arr[5] = {1, 2, 6, 8, 9};
    int min = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    cout<<"Minimum element is:"<<min;
    return 0;
}