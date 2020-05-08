#include <iostream>

using namespace std;

int main() {
    cout << "Select a menu" << endl
         << "1. food 2. drink" << endl;
    int menu;
    int food;
    int drink;
    cin >> menu;
    switch (menu) {
    case 1:
        cout << "You have selected food. Which food ?" << endl
             << "1. Korean 2. American 3. Chinese" << endl;
        int country;
        cin >> country;
        switch (country) {
        case 1:
            cout << "You have selected an Korean food. Which Korean food ?" << endl
                 << "1. Rice 2. Bulgogi" << endl;
            cin >> food;
            switch (food) {
            case 1:
                cout << "Enjoy your rice!" << endl;
                break;
            case 2:
                cout << "Enjoy your bulgogi!" << endl;
                break;
            }
            break;
        case 2:
            cout << "You have selected an American food. Which American food ?" << endl
                 << "1. Hamburger 2. Salad" << endl;
            cin >> food;
            switch (food) {
            case 1:
                cout << "Enjoy your hamburger!" << endl;
                break;
            case 2:
                cout << "Enjoy your salad!" << endl;
                break;
            }
            break;
        case 3:
            cout << "You have selected an Chinese food. Which Chinese food ?" << endl
                 << "1. Noodle 2. Dimsum" << endl;
            cin >> food;
            switch (food) {
            case 1:
                cout << "Enjoy your noodle!" << endl;
                break;
            case 2:
                cout << "Enjoy your dimsum!" << endl;
                break;
            }
            break;
        }
        break;
    case 2:
        cout << "You have selected drink. Which drink ?" << endl
             << "1. Cola 2. Orange juice 3. Water" << endl;
        cin >> drink;
        switch (drink) {
        case 1:
            cout << "Enjoy your cola!" << endl;
            break;
        case 2:
            cout << "Enjoy your orange juice!" << endl;
            break;
        case 3:
            cout << "Enjoy your water!" << endl;
            break;
        }
        break;
    }
    return 0;
}
