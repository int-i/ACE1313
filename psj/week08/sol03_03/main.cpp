#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    for (int i = 1; i <= 5; i += 1) {
        sum += pow(2, i);
    }
    cout << sum << endl;
    return 0;
}
