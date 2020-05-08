# Function 2

## Exercise

### 3-1.

```c
#include <stdio.h>

int global;

int main()
{
    int local;
    global = 0;
    local = 2;
    {
        int very_local;
        very_local = global + local;
        printf("%d\n", very_local);
    }
    // printf("%d\n", very_local);
    return 0;
}
```

### 3-2.

```c
#include <stdio.h>

int N = 1000;
int cal_sum();

int main()
{
    int sum;
    sum = cal_sum();
    printf("sum of first %d naural numbers is %d\n", N, sum);
    return 0;
}

int cal_sum()
{
    int i, s = 0;
    for (i = 0; i <= N; i++)
    {
        s += i;
    }
    return s;
}
```

### 3-3.

```c
#include <stdio.h>

void sub1(void)
{
    int x;
    x = 0;
    printf("sub1's first x = %d\n", x);
    {
        int y;
        x = 1;
        y = 2;
        printf("sub1's second x = %d\n", x);
        printf("sub1's first y = %d\n", y);
    }
    x = 3;
    printf("sub1's last x = %d\n", x);
    // y = 4;
}

void sub2(void)
{
    int x;
    x = 0;
    printf("sub2's first x = %d\n", x);
    {
        int y;
        x = 1;
        y = 2;
        printf("sub2's second x = %d\n", x);
        printf("sub2's first y = %d\n", y);
    }
    printf("sub2's third x = %d\n", x);
    {
        int y;
        x = 3;
        y = 3;
        printf("sub2's fourth x = %d\n", x);
        printf("sub2's second y = %d\n", y);
    }
    printf("sub2's last  x = %d\n", x);
}

int main()
{
    printf("sub1: \n");
    sub1();
    printf("\nsub2: \n");
    sub2();
    return 0;
}
```

### 4.

```c
#include <stdio.h>

int main()
{
    void message();
    message();
    return 0;
}

void message()
{
    printf("Category of Function\n");
}
```

### 5.

```c
#include <stdio.h>

int main()
{
    int sum;
    int cal_sum();
    sum = cal_sum();
    printf("sum of first ten naural is %d\n", sum);
    return 0;
}

int cal_sum()
{
    int i, s = 0;
    for (i = 0; i <= 10; i++)
    {
        s = s + i;
    }
    return s;
}
```

#### 6.

```c
#include <stdio.h>

int main()
{
    void today(int, int, int);
    int d, m, y;
    printf("enter today's data dd/mm/yy");
    scanf("%d %d %d", &d, &m, &y);
    today(d, m, y);
    return 0;
}

void today(int x, int y, int z)
{
    printf("today is %d-%d-%d\n", z, y, x);
}
```

### 7.

```c
#include <stdio.h>

int main()
{
    int x, y, z;
    int add(int, int, int);
    printf("Enter any three numbers : \n");
    scanf("%d %d %d", &x, &y, &z);
    z = add(x, y, z);
    printf("z = %d\n", z);
    return 0;
}

int add(int x, int y, int z)
{
    return (x + y + z);
}
```

### 8-1.

```c
#include <math.h>
#include <stdio.h>

int main()
{
    int pi = 3.14159265;
    printf("%f", cos(pi));
    return 0;
}
```

### 8-2.

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void get_random(int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%6d\n", rand());
    }
}

int main()
{
    srand(time(NULL));
    get_random(10);
    return 0;
}
```

### 8-3.

```c
#include <stdio.h>
#include <time.h>

int main()
{
    time_t a = time(NULL);
    for (int x = 0; x < 1000000000; x++)
    {
    }
    time_t b = time(NULL);
    printf("processing time = %d sec\n", b - a);
    return 0;
}
```

### 9-1.

```c
#include <stdio.h>

int main()
{
    int x, y;
    void swap(int, int);
    printf("Enter the value of x and y\n");
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);
    swap(x, y);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}

void swap(int a, int b)
{
    int c;
    c = a;
    a = b;
    b = c;
    printf("the values after swapping are x = %d, y = %d\n", a, b);
}
```

### 9-2.

```c
#include <stdio.h>

int main()
{
    int x, y;
    void swap(int *, int *);
    printf("Enter the value of x and y\n");
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);
    swap(&x, &y);
    printf("x = %d, y = %d\n", x, y);
    printf("x의 주소 = %d, y의 주소 = %d\n", &x, &y);
    return 0;
}

void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
    printf("the values after swapping are x = %d, y = %d\n", *a, *b);
}
```

### 10-1.

```c
#include <stdio.h>

int main()
{
    int n, factorial;
    int fact(int);
    printf("Enter the any number\n");
    printf("number = ");
    scanf("%d", &n);
    factorial = fact(n);
    printf("the factorial is %d\n", factorial);
    return 0;
}

int fact(int n)
{
    int res = 1, i;
    for (i = n; i >= 1; i--)
    {
        res = res * i;
    }
    return res;
}
```

### 10-2.

```c
#include <stdio.h>

int main()
{
    int n, factorial;
    int fact(int);
    printf("Enter the any number\n");
    printf("number = ");
    scanf("%d", &n);
    factorial = fact(n);
    printf("the factorial is %d\n", factorial);
    return 0;
}

int fact(int n)
{
    int res = 1;
    if (n == 1)
    {
        return res;
    }
    else
    {
        res = n * fact(n - 1);
    }
    return res;
}
```

## Homework

### 1. Please complete the comment for the following source code like first line(describe the meaning of each statement)

See [HW 1](./hw01/main.c)

### 2. How many variables in the following program? Draw the scope of the each variable.

See [HW 2](./hw02/main.c)

### 3. Complete the following functions to get the maximum value.

See [HW 3](./hw03/main.c)
