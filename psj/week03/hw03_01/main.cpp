#include <iostream>

using namespace std;

int main() {
    int s1 = 0;
    for (int i = 1; i <= 30; i += 1) {
        s1 += i * i + 1;
    }
    cout << s1 << endl;
    return 0;
}
