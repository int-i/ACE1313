#include <iostream>

using namespace std;

int main() {
    int a = 3;
    int b = 4;
    int c = b - a;
    switch (c) {
    case 1:
    case 2:
        cout << "God give me an opportunity to change things" << endl;
        break;
    case 3:
    case 4:
        cout << "God give me an opportunity to run my show" << endl;
        break;
    }
    return 0;
}
