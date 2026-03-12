#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        int d = s[i] - '0';
        int inverted = 9 - d;
        if (inverted < d) {
            if (i == 0 && inverted == 0) {
                continue;
            }
            s[i] = inverted + '0';
        }
    }
    cout << s << endl;
    return 0;
}