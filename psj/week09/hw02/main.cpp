#include <cmath>
#include <iostream>

using namespace std;

float sum(float a[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i += 1) {
        sum += a[i];
    }
    return sum;
}

float multi_sum(float a[], float b[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i += 1) {
        sum += a[i] * b[i];
    }
    return sum;
}

float square_sum(float a[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i += 1) {
        sum += a[i] * a[i];
    }
    return sum;
}

int main() {
    float x[] = { 3.0, 4.5, 5.5, 6.5, 7.5, 8.5, 8.0, 9.0, 9.5, 10.0 };
    float y[] = { 1.5, 2.0, 3.5, 5.0, 6.0, 7.5, 9.0, 10.5, 12.0, 14.0 };
    int n = sizeof(x) / sizeof(float);
    float b = (n * multi_sum(x, y, n) - sum(x, n) * sum(y, n)) / (n * square_sum(x, n) - pow(sum(x, n), 2));
    float a = (sum(y, n) - b * sum(x, n)) / n;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "y = " << a << " + " << b << "x" << endl;
    return 0;
}
