#include <iostream>

using namespace std;

int main() {
    int n = 1;
    int sum = 0;
    do {
        sum += n;
        n += 1;
    } while (n <= 100);
    cout << sum << endl;
    return 0;
}
