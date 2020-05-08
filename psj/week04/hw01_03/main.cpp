#include <iostream>

using namespace std;

int main() {
    float a = 3.5;
    switch ((int) (a * 10)) {
    case 5:
        cout << "The art of C" << endl;
        break;
    case 15:
        cout << "The spirit of C" << endl;
        break;
    case 25:
        cout << "See through C" << endl;
        break;
    case 35:
        cout << "Simply c" << endl;
        break;
    }
    return 0;
}
