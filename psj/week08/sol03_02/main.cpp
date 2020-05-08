#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    for (int i = -1; i <= 1; i += 1) {
        for (int j = -1; j <= 1; j += 1) {
            sum += abs(i - j);
        }
    }
    cout << sum << endl;
    return 0;
}
