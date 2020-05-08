#include <ctime>
#include <iomanip>
#include <iostream>
#define SIZE 20

using namespace std;

void fill(int a[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i += 1) {
        for (int j = 0; j < SIZE; j += 1) {
            a[i][j] = rand() % 100;
        }
    }
}

void show_array_1d(int a[SIZE]) {
    for (int i = 0; i < SIZE; i += 1) {
        cout << setw(3) << a[i];
    }
    cout << endl;
}

void show_array_2d(int a[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i += 1) {
        show_array_1d(a[i]);
    }
}

int calculate_row_sum(int a[SIZE][SIZE], int row_index) {
    int sum = 0;
    for (int i = 0; i < SIZE; i += 1) {
        sum += a[row_index][i];
    }
    return sum;
}

int calculate_column_sum(int a[SIZE][SIZE], int column_index) {
    int sum = 0;
    for (int i = 0; i < SIZE; i += 1) {
        sum += a[i][column_index];
    }
    return sum;
}

int calculate_diagonal_sum(int a[SIZE][SIZE]) {
    int sum = 0;
    for (int i = 0; i < SIZE; i += 1) {
        sum += a[i][i];
    }
    return sum;
}

int calculate_backward_diagonal_sum(int a[SIZE][SIZE]) {
    int sum = 0;
    for (int i = 0; i < SIZE; i += 1) {
        sum += a[SIZE - i - 1][i];
    }
    return sum;
}

int find_max_in_row(int a[SIZE][SIZE], int row_index) {
    int max = a[row_index][0];
    int index = 0;
    for (int i = 1; i < SIZE; i += 1) {
        if (max < a[row_index][i]) {
            max = a[row_index][i];
            index = i;
        }
    }
    return index;
}

int find_max_in_column(int a[SIZE][SIZE], int column_index) {
    int max = a[0][column_index];
    int index = 0;
    for (int i = 1; i < SIZE; i += 1) {
        if (max < a[i][column_index]) {
            max = a[i][column_index];
            index = i;
        }
    }
    return index;
}

int find_max_row(int a[SIZE][SIZE]) {
    int max_sum = calculate_row_sum(a, 0);
    int index = 0;
    for (int i = 1; i < SIZE; i += 1) {
        int sum = calculate_row_sum(a, i);
        if (max_sum < sum) {
            max_sum = sum;
            index = i;
        }
    }
    return index;
}

int find_max_column(int a[SIZE][SIZE]) {
    int max_sum = calculate_column_sum(a, 0);
    int index = 0;
    for (int i = 1; i < SIZE; i += 1) {
        int sum = calculate_column_sum(a, i);
        if (max_sum < sum) {
            max_sum = sum;
            index = i;
        }
    }
    return index;
}

int main() {
    srand((unsigned int) time(NULL));
    int a[SIZE][SIZE];
    fill(a);
    show_array_2d(a);
    int row_index;
    int column_index;
    cout << "row index: ";
    cin >> row_index;
    cout << "row sum: " << calculate_row_sum(a, row_index) << endl;
    cout << "column index: ";
    cin >> column_index;
    cout << "column sum: " << calculate_column_sum(a, column_index) << endl;
    cout << "diagonal sum: " << calculate_diagonal_sum(a) << endl;
    cout << "backward diagonal sum: " << calculate_backward_diagonal_sum(a) << endl;
    cout << "row index: ";
    cin >> row_index;
    cout << "row max: " << a[row_index][find_max_in_row(a, row_index)] << endl;
    cout << "column index: ";
    cin >> column_index;
    cout << "column max: " << a[find_max_in_column(a, column_index)][column_index] << endl;
    cout << "max row: ";
    show_array_1d(a[find_max_row(a)]);
    cout << "max column: ";
    int max_column_index = find_max_column(a);
    int max_column[SIZE];
    for (int i = 0; i < SIZE; i += 1) {
        max_column[i] = a[i][max_column_index];
    }
    show_array_1d(max_column);
    return 0;
}
