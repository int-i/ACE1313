#include <iostream>

using namespace std;

int main() {
    int s2 = 0;
    for (int i = 10; i <= 30; i += 1) {
        for (int j = 0; j <= 5; j += 1) {
            s2 += i * j;
        }
    }
    cout << s2 << endl;
    return 0;
}
