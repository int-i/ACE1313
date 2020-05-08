#include <stdio.h>

int get_max2(int x, int y);
int get_max3(int x, int y, int z);

int main(void) {
    int max1, max2;
    int x = 2, y = 5, z = 2;
    max1 = get_max2(x, y);
    max2 = get_max3(x, y, z);
    printf("the maximum value is %d\n", max1);
    printf("the maximum value is %d\n", max2);
    return 0;
}

int get_max2(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

int get_max3(int x, int y, int z) {
    if (x >= y && x >= z) {
        return x;
    } else if (y >= x && y >= z) {
        return y;
    } else {
        return z;
    }
}
