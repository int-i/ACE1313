#include <iostream>

using namespace std;

int main() {
    cout << "Enter 3 numbers" << endl;
    int i, j, k;
    cin >> i >> j >> k;
    if (i >= j && i >= k) {
        cout << i << " is the greatest." << endl;
    } else if (j >= i && j >= k) {
        cout << j << " is the greatest." << endl;
    } else if (k >= i && k >= j) {
        cout << k << " is the greatest." << endl;
    }
    return 0;
}
