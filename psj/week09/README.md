# Array 1

## Exercise

### 1. Basic Array

```c
#include <stdio.h>

int main()
{
    int grade[10];
    int i;
    for (i = 0; i < 10; i++)
        grade[i] = 0;
    printf("====================\n");
    printf(" INDEX VALUE\n");
    printf("====================\n");
    for (i = 0; i < 10; i++)
        printf("%5d %5d\n", i, grade[i]);
    return 0;
}
```

### 2. Basic Array

```c
#include <stdio.h>

int main()
{
    int grade[10] = {31, 63, 62, 87, 14, 25, 92, 70, 75, 53};
    int i;
    printf("=================\n");
    printf("  INDEX VALUE\n");
    printf("=================\n");
    for (i = 0; i < 10; i++)
        printf("%5d %5d\n", i, grade[i]);
    return 0;
}
```

### 3. Array Average

```c
#include <stdio.h>
#define STUDENTS 5

int main()
{
    int grade[STUDENTS];
    int sum = 0;
    int i, average;
    for (i = 0; i < STUDENTS; i++)
    {
        printf("enter the scores: ");
        scanf("%d", &grade[i]);
    }
    for (i = 0; i < STUDENTS; i++)
        sum += grade[i];
    average = sum / STUDENTS;
    printf("average score= %d\n", average);
    return 0;
}
```

### 5. Array Loop

```c
#include <stdio.h>
#define SIZE 5

int main()
{
    int array[SIZE] = {1, 2, 3, 4, 5};
    int i;
    for (i = 0; i <= SIZE; i++)
        printf("array[%d] %d\n", i, array[i]);
    return 0;
}
```

### 6. Array Loop

```c
#include <stdio.h>
#define SIZE 5

int main()
{
    int i;
    int a[SIZE] = {1, 2, 3, 4, 5};
    int b[SIZE];
    printf("a 배열 값 출력\n");
    for (i = 0; i < SIZE; i += 1)
        printf("a[%d] %d\n", i, a[i]);
    printf("b 배열 값 출력\n");
    for (i = 0; i < SIZE; i += 1)
        printf("b[%d] %d\n", i, b[i]);
    for (i = 0; i < SIZE; i += 1)
        b[i] = a[i];
    printf("a 배열 값 출력\n");
    for (i = 0; i < SIZE; i += 1)
        printf("a[%d] %d\n", i, a[i]);
    printf("b 배열 값 출력\n");
    for (i = 0; i < SIZE; i += 1)
        printf("b[%d] %d\n", i, b[i]);
    return 0;
}
```

### 7. Array Comparision

```c
#include <stdio.h>
#define SIZE 5

int main()
{
    int i;
    int a[SIZE] = {1, 2, 3, 4, 5};
    int b[SIZE] = {1, 2, 3, 4, 5};
    if (a == b)
        printf("a와 b가 같다.\n");
    else
    {
        printf("a = %d, b = %d\n", a, b);
        printf("wrong reuslts.\n");
    }
    for (i = 0; i < SIZE; i++)
        if (a[i] != b[i])
        {
            printf("a[] != b[]\n");
            return 0;
        }
    printf("a[] = b[]\n");
    return 0;
}
```

### 8. Array Size

```c
#include <stdio.h>

int main()
{
    int grade[] = {1, 2, 3, 4, 5, 6};
    int i, size;
    printf("리스트의 총 byte 수: %d\n", sizeof(grade));
    printf("리스트[0]의 총 byte 수: %d\n", sizeof(grade[0]));
    size = sizeof(grade) / sizeof(grade[0]);
    for (i = 0; i < size; i++)
        printf("%d ", grade[i]);
    printf("\n");
    printf("배열의 값 개수: %d\n", size);
    return 0;
}
```

### 9. Minimum Element

```c
#include <stdio.h>
#define SIZE 10

int main()
{
    int grade[SIZE];
    int i, min;
    for (i = 0; i < SIZE; i++)
    {
        printf("enter the scores : ");
        scanf("%d", &grade[i]);
    }
    min = grade[0];
    for (i = 1; i < SIZE; i++)
        if (grade[i] < min)
            min = grade[i];
    printf("minimum value is %d.\n", min);
    return 0;
}
```

### 10. Array Loop

```c
#include <stdio.h>
#define SIZE 7

void square_array(int a[], int size);
void print_array(int a[], int size);
void square_element(int e);

int main()
{
    int list[SIZE] = {1, 2, 3, 4, 5, 6, 7};
    print_array(list, SIZE);
    square_array(list, SIZE);
    print_array(list, SIZE);
    printf("%3d\n", list[6]);
    square_element(list[6]);
    printf("%3d\n", list[6]);
    return 0;
}

void square_array(int a[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        a[i] = a[i] * a[i];
}

void square_element(int e)
{
    e = e * e;
}

void print_array(int a[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%3d ", a[i]);
    printf("\n");
}
```

### 11. 2D Array

```c
#include <stdio.h>

int main()
{
    int s[3][5]; // declaration of 2D array
    int i, j;    // for array index
    int value = 0;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 5; j++)
            s[i][j] = value++;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 5; j++)
            printf("%d\n", s[i][j]);
    return 0;
}
```

### 12. Matrix Sum & Multiple

```c
#include <stdio.h>
#define A_ROWS 3
#define A_COLS 3
#define B_ROWS 3
#define B_COLS 3
#define C_ROWS 3
#define C_COLS 3

int main()
{
    int A[A_ROWS][A_COLS] = {
        {2, 3, 0},
        {8, 9, 1},
        {7, 0, 5}
    };
    int B[B_ROWS][B_COLS] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };
    int C[C_ROWS][C_COLS];
    int D[A_ROWS][B_COLS];
    int r, c, b_h, mul = 0;
    for (r = 0; r < C_ROWS; r++)
        for (c = 0; c < C_COLS; c++)
            C[r][c] = A[r][c] + B[r][c];
    printf("행렬 합 C\n");
    for (r = 0; r < C_ROWS; r++)
    {
        for (c = 0; c < C_COLS; c++)
            printf("%d ", C[r][c]);
        printf("\n");
    }

    for (r = 0; r < A_ROWS; r++)
        for (c = 0; c < A_COLS; c++)
        {
            for (b_h = 0; b_h < B_COLS; b_h++)
                mul += A[r][b_h] * B[b_h][c];
            D[r][c] = mul;
            mul = 0;
        }
    printf("행렬 곱 D\n");
    for (r = 0; r < A_ROWS; r++)
    {
        for (c = 0; c < B_COLS; c++)
            printf("%d ", D[r][c]);
        printf("\n");
    }
    return 0;
}
```

## Project

### 1. For the following set of n data points (x, y), compute the correlation coefficient r, given by

| x     | y      |
| ----- | ------ |
| 34.22 | 102.43 |
| 39.87 | 100.93 |
| 41.85 | 97.43  |
| 43.23 | 97.81  |
| 40.06 | 98.32  |
| 53.29 | 98.32  |
| 53.29 | 100.07 |
| 54.14 | 97.08  |
| 49.12 | 91.59  |
| 40.71 | 94.85  |
| 55.15 | 94.65  |

See [HW 1](./hw01/main.cpp)

### 2. For the following set of point given by (x, y) fit a straight line given by

| x    | y    |
| ---- | ---- |
| 3.0  | 1.5  |
| 4.5  | 2.0  |
| 5.5  | 3.5  |
| 6.5  | 5.0  |
| 7.5  | 6.0  |
| 8.5  | 7.5  |
| 8.0  | 9.0  |
| 9.0  | 10.5 |
| 9.5  | 12.0 |
| 10.0 | 14.0 |

See [HW 2](./hw02/main.cpp)
