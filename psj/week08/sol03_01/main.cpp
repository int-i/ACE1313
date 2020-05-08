#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    for (int i = 0; i <= 2; i += 1) {
        for (int j = 0; j <= 3; j += 1) {
            sum += i * j;
        }
    }
    cout << sum << endl;
    return 0;
}
