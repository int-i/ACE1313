#include <iostream>

using namespace std;

int main() {
    int n = 10;
    int max;
    int index;
    cin >> max;
    while (--n) {
        int x;
        cin >> x;
        if (x > max) {
            max = x;
            index = 10 - n;
        }
    }
    cout << "The max: " << max << endl;
    cout << "The location of max: " << index << endl;
    return 0;
}
