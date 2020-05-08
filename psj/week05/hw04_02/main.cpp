#include <iostream>

using namespace std;

int main() {
    int a, b;
    do {
        cin >> a >> b;
        if (a > b) {
            cout << a << " is bigger than " << b << endl;
        } else if (b > a) {
            cout << b << " is bigger than " << a << endl;
        }
    } while (a != b);
    return 0;
}
