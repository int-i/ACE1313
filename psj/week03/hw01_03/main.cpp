#include <iostream>

using namespace std;

int main() {
    int n = 1;
    int sum = 0;
    for (n = 0; n <= 100; n += 1) {
        sum += n;
    }
    cout << sum << endl;
    return 0;
}
