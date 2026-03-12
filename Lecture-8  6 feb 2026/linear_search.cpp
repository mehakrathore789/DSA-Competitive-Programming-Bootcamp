#include <iostream>
using namespace std;
int main() {
    int arr[5] = {1, 2, 6, 8, 9};
    int a;

    cout << "Enter number to search: ";
    cin >> a;
    bool found = false;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == a) {
            found = true;
            break;   
        }
    }
    if (found)
        cout << "Found";
    else
        cout << "Not Found";

    return 0;
}