# Final Exam

> 문제 유형만 같으며, 손코딩 문제만 포함됨

## 1. Fill in the blanks so you can see the results below.

```c
#include <stdio.h>
#include <_____>

struct date
{
    int year;
    int month;
    int day;
};

struct student
{
    int sid;
    _____;
    float height;
    struct date *birthday;
};

int main()
{
    struct date birthday = {_____};
    struct student who;
    who.sid = 43;
    strcpy(who.name, "배주현");
    who.height = 158.0;
    who.birthday = _____;
    printf("sid: %d\n", who.sid);
    printf("name: %s\n", who.name);
    printf(_____, who.height);
    printf("birthday: %d-%d-%d\n", _____);
    return 0;
}
```

```text
sid: 43
name: 배주현
height: 158.0
birthday: 1991-3-29
```

See [Sol. 1](./sol01/main.c)

## 2. Fill in the blanks to complete the code below.

```c
#include <stdio.h>

void sum_matrix(int A[4][4], int B[4][4], int R[4][4])
{
    _____
}

void multiply_matrix(int A[4][1], int B[1][4], int R[4][4])
{
    _____
}

int main()
{
    int A[4][1] = {{1}, {2}, {3}, {4}};
    int B[1][4] = {{1, 2, 3, 4}};
    int C[4][4] = {{1, 0, 0, 0}, {0, 2, 0, 0}, {0, 0, 3, 0}, {0, 0, 0, 4}};
    int R1[4][4];
    int R2[4][4];

    // print A
    printf("A\n");
    for (int r = 0; r < 4; r += 1)
    {
        for (int c = 0; c < 1; c += 1)
        {
            printf("%3d", A[r][c]);
        }
        printf("\n");
    }
    // print B
    printf("B\n");
    for (int r = 0; r < 1; r += 1)
    {
        for (int c = 0; c < 4; c += 1)
        {
            printf("%3d", B[r][c]);
        }
        printf("\n");
    }

    // multiplication
    multiply_matrix(A, B, R1);

    // print R1
    printf("R1\n");
    for (int r = 0; r < 4; r += 1)
    {
        for (int c = 0; c < 4; c += 1)
        {
            printf("%3d", R1[r][c]);
        }
        printf("\n");
    }

    // summation
    sum_matrix(R1, C, R2);

    // print R2
    printf("R2\n");
    for (int r = 0; r < 4; r += 1)
    {
        for (int c = 0; c < 4; c += 1)
        {
            printf("%3d", R2[r][c]);
        }
        printf("\n");
    }
    return 0;
}
```

See [Sol. 2](./sol02/main.c)

## 3. Read the scores from a given file, print the average of each, and save it as a file. 

Input: `student.txt`

```text
kim 90 80 90
lee 80 75 95
park 85 85 85
choi 90 90 80
```

Output: `evaluation.txt`

```text
86.250000 82.500000 87.500000
```

See [Sol. 3](./sol03/main.c)
