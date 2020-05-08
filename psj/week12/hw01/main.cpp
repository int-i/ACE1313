#include <iostream>

using namespace std;

struct Student {
    int korean;
    int english;
    int math;
};

int main() {
    Student students[3];
    cout << "Enter scores for 3 students" << endl;
    for (int i = 0; i < 3; i += 1) {
        cout << "student " << i + 1 << ": ";
        cin >> students[i].korean;
        cin >> students[i].english;
        cin >> students[i].math;
    }
    for (int i = 0; i < 3; i += 1) {
        cout << "student " << i + 1 << endl
             << "korean: " << students[i].korean << " english: " << students[i].english << " math: " << students[i].math << " total: " << students[i].korean + students[i].english + students[i].math << endl;
    }
    return 0;
}
