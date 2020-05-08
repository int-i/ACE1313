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
    float x[] = { 34.22, 39.87, 41.85, 43.23, 40.06, 53.29, 53.29, 54.14, 49.12, 40.71, 55.15 };
    float y[] = { 102.43, 100.93, 97.43, 97.81, 98.32, 98.32, 100.07, 97.08, 91.59, 94.85, 94.65 };
    int n = sizeof(x) / sizeof(float);
    float r = (n * multi_sum(x, y, n) - sum(x, n) * sum(y, n)) / sqrt((n * square_sum(x, n) - pow(sum(x, n), 2)) * (n * square_sum(y, n) - pow(sum(y, n), 2)));
    cout << "r = " << r << endl;
    return 0;
}
