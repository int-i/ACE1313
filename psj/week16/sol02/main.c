#include <stdio.h>

void sum_matrix(int A[4][4], int B[4][4], int R[4][4]) {
    for (int r = 0; r < 4; r += 1) {
        for (int c = 0; c < 4; c += 1) {
            R[r][c] = A[r][c] + B[r][c];
        }
    }
}

void multiply_matrix(int A[4][1], int B[1][4], int R[4][4]) {
    for (int r = 0; r < 4; r += 1) {
        for (int c = 0; c < 4; c += 1) {
            R[r][c] = 0;
            for (int h = 0; h < 1; h += 1) {
                R[r][c] += A[r][h] * B[h][c];
            }
        }
    }
}

int main() {
    int A[4][1] = { { 1 }, { 2 }, { 3 }, { 4 } };
    int B[1][4] = { { 1, 2, 3, 4 } };
    int C[4][4] = { { 1, 0, 0, 0 }, { 0, 2, 0, 0 }, { 0, 0, 3, 0 }, { 0, 0, 0, 4 } };
    int R1[4][4];
    int R2[4][4];

    // print A
    printf("A\n");
    for (int r = 0; r < 4; r += 1) {
        for (int c = 0; c < 1; c += 1) {
            printf("%3d", A[r][c]);
        }
        printf("\n");
    }
    // print B
    printf("B\n");
    for (int r = 0; r < 1; r += 1) {
        for (int c = 0; c < 4; c += 1) {
            printf("%3d", B[r][c]);
        }
        printf("\n");
    }

    // multiplication
    multiply_matrix(A, B, R1);

    // print R1
    printf("R1\n");
    for (int r = 0; r < 4; r += 1) {
        for (int c = 0; c < 4; c += 1) {
            printf("%3d", R1[r][c]);
        }
        printf("\n");
    }

    // summation
    sum_matrix(R1, C, R2);

    // print R2
    printf("R2\n");
    for (int r = 0; r < 4; r += 1) {
        for (int c = 0; c < 4; c += 1) {
            printf("%3d", R2[r][c]);
        }
        printf("\n");
    }
    return 0;
}
