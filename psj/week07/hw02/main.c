#include <stdio.h>

int N = 1000; // 1, global
int cal_sum();

void main() {
    int sum; // 2, void main()
    sum = cal_sum();
    {
        int k; // 3, this scope
        k = 9;
        printf("k = %d\n", k);
    }
    printf("sum of first %d natural numbers is %d\n", N, sum);
}

int cal_sum() {
    int i, s = 0; // 5, int cal_sum()
    for (i = 0; i <= N; i++) {
        s = s + i;
    }
    return s;
}
