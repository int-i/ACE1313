#include <iostream>

using namespace std;

int main() {
    int n = 1;
    int sum = 0;
    while (n <= 100) {
        sum += n;
        n += 1;
    }
    cout << sum << endl;
    return 0;
}
