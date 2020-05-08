#include <iostream>

using namespace std;

int main() {
    cout << "Enter a menu number: rice(1), bread(2), drink(3), noodle(4)" << endl;
    int input;
    cin >> input;
    switch (input) {
    case 1:
        cout << "You have selected a rice" << endl;
        break;
    case 2:
        cout << "You have selected a bread" << endl;
        break;
    case 3:
        cout << "You have selected a drink" << endl;
        break;
    case 4:
        cout << "You have selected a noodle" << endl;
        break;
    default:
        cout << "there is no such menu" << endl;
    }
    return 0;
}
