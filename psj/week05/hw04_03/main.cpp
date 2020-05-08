#include <iostream>

using namespace std;

int main() {
    int op;
    int a, b;
    while (1) {
        cout << "1. add 2. sub 3. mul 4. div 5. quit" << endl
             << "select operation" << endl;
        cin >> op;
        if (op == 5) {
            break;
        }
        cout << "enter two numbers" << endl;
        cin >> a >> b;
        switch (op) {
        case 1:
            cout << "sum is " << a + b << endl;
            break;
        case 2:
            cout << "sub is " << a - b << endl;
            break;
        case 3:
            cout << "mul is " << a * b << endl;
            break;
        case 4:
            cout << "div is " << a / b << endl;
            break;
        }
    }
    return 0;
}
