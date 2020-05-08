# Function 1

## Exercise

### 0-1.

```c
#include <stdio.h>

int square(int n)
{
    return (n * n);
}

int main()
{
    int num, tmp;
    printf("Input number: ");
    scanf("%d", &tmp);
    num = square(tmp);
    printf("Result: %d\n", num);
    return 0;
}
```

### 0-2.

```c
#include <stdio.h>

int get_max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main()
{
    int num, X, Y;
    printf("Input number X: ");
    scanf("%d", &X);
    printf("Input number Y: ");
    scanf("%d", &Y);
    num = get_max(X, Y);
    printf("Result: %d\n", num);
    return 0;
}
```

### 0-3.

```c
#include <stdio.h>

int absolute(int x)
{
    if (x > 0)
        return x;
    else
        return -x;
}

int main()
{
    int num, X;
    printf("Input number: ");
    scanf("%d", &X);
    num = absolute(X);
    printf("Result: %d\n", num);
    return 0;
}
```

### 0-4.

```c
#include <stdio.h>

void draw_rect(int side)
{
    int x, y;
    for (y = 0; y < side; y += 1)
    {
        for (x = 0; x < side; x += 1)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int X;
    printf("Input number: ");
    scanf("%d", &X);
    draw_rect(X);
    return 0;
}
```

### 0-5.

```c
#include <stdio.h>

int get_integer()
{
    int n;
    printf("integer value: ");
    scanf("%d", &n);
    return n;
}

int main()
{
    int num;
    num = get_integer();
    printf("Result: %d\n", num);
    return 0;
}
```

### 0-6.

```c
#include <stdio.h>

int power(int x, int y)
{
    int i;
    long result = 1;
    for (i = 0; i < y; i++)
    {
        result *= x;
    }
    return result;
}

int main()
{
    int num, X, Y;
    printf("Input number X: ");
    scanf("%d", &X);
    printf("Input number Y: ");
    scanf("%d", &Y);
    num = power(X, Y);
    printf("Result: %d\n", num);
    return 0;
}
```

### 0-7.

```c
#include <stdio.h>

int factorial(int n)
{
    int i;
    long result = 1;
    for (i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int num, tmp;
    printf("Input number: ");
    scanf("%d", &tmp);
    num = factorial(tmp);
    printf("Result: %d\n", num);
    return 0;
}
```

### 1.

```c
#include <stdio.h>

int add(int a, int b);

int main()
{
    int x = 1, y = 2, z;
    z = add(x, y);
    printf("z = %d\n", z);
    return 0;
}

int add(int a, int b)
{
    return a + b;
}
```

### 2.

```c
#include <stdio.h>

int square(int n);

int main()
{
    int x = 15, z;
    z = square(x);
    printf("z = %d\n", z);
    return 0;
}

int square(int n)
{
    return (n * n);
}
```

### 2-1.

```c
#include <stdio.h>

int combination(int n, int r);
int get_integer();
int factorial(int n);

int main()
{
    int a, b;
    a = get_integer();
    b = get_integer();
    printf("C(%d, %d) = %d \n", a, b, combination(a, b));
    return 0;
}

int combination(int n, int r)
{
    return (factorial(n) / (factorial(r) * factorial(n - r)));
}

int get_integer()
{
    int n;
    printf("integer value: ");
    scanf("%d", &n);
    return n;
}

int factorial(int n)
{
    int i;
    long result = 1;
    for (i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}
```
