#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 7; i += 1) {
        char c = 'A';
        for (int j = 0; j < 13; j += 1) {
            if (j < 7) {
                if (i + j <= 6) {
                    cout << (char) (c + j);
                } else {
                    cout << " ";
                }
            } else {
                if (i + 6 <= j) {
                    cout << (char) (c + 12 - j);
                } else {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}
