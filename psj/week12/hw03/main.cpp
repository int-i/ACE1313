#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int sid;
    int age;
    char sex;
    int korean;
    int english;
    int math;
};

int main() {
    Student students[3];
    cout << "Enter student name, student ID, age, sex(M for man, F for woman), and scores for 3 students" << endl;
    for (int i = 0; i < 3; i += 1) {
        cout << "student " << i + 1 << ": ";
        cin >> students[i].name;
        cin >> students[i].sid;
        cin >> students[i].age;
        cin >> students[i].sex;
        cin >> students[i].korean;
        cin >> students[i].english;
        cin >> students[i].math;
    }
    for (int i = 0; i < 3; i += 1) {
        cout << "student " << i + 1 << endl
             << "student name: " << students[i].name << " student ID: " << students[i].sid << " age: " << students[i].age << " sex: " << students[i].sex << endl
             << "korean: " << students[i].korean << " english: " << students[i].english << " math: " << students[i].math << " total: " << students[i].korean + students[i].english + students[i].math << endl;
    }
    return 0;
}
