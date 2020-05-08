#include <iostream>

using namespace std;

int main() {
    cout << "Enter two numbers" << endl;
    int i, j;
    cin >> i >> j;
    if (j % i) {
        cout << i << " isn't a factor of " << j << "." << endl;
    } else {
        cout << i << " is a factor of " << j << "." << endl;
    }
    return 0;
}
