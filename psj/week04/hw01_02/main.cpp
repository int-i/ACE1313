#include <iostream>

using namespace std;

int main() {
    int temp;
    cin >> temp;
    if (temp <= 20) {
        cout << "Oooooooooh! Damn cool!" << endl;
    } else if (temp > 20 && temp <= 30) {
        cout << "Rain rain here again" << endl;
    } else if (temp > 30 && temp <= 40) {
        cout << "Wish I am on Everest" << endl;
    } else {
        cout << "Good old nagpur weather" << endl;
    }
    return 0;
}
