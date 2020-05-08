#include <iostream>

using namespace std;

int main() {
    char c;
    while (1) {
        cin >> c;
        switch (c >= 65 && c <= 90) {
        case true:
            cout << (char) (c + 32) << endl;
            break;
        default:
            cout << c << endl;
        }
    }
    return 0;
}
