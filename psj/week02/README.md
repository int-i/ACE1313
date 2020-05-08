# Data Types

## Exercise

### 1-1.

```c
#include <stdio.h>

int main()
{
    short year = 0;
    int sale = 0;
    long total_sale = 0;
    year = 10;
    sale = 200000000;
    total_sale = year * sale;
    printf("total_sale = %d \n", total_sale);
    printf("size of short type %d byte \n", sizeof(short));
    printf("size of int type %d byte \n", sizeof(int));
    printf("size of long type %d byte \n", sizeof(long));
    return 0;
}
```

### 1-2.

```c
#include <stdio.h>

int main()
{
    int x;
    unsigned int y;
    x = 2147483647;
    printf("x = %d\n", x);
    printf("x+1 = %d\n", x + 1);
    printf("x+2 = %d\n", x + 2);
    printf("x+3 = %d\n", x + 3);
    y = 4294967295;
    printf("y = %d\n", y);
    printf("y+1 = %d\n", y + 1);
    printf("y+2 = %d\n", y + 2);
    printf("y+3 = %d\n", y + 3);
    return 0;
}
```

### 2.

```c
#include <stdio.h>
#define PI 3.141592

int main()
{
    float radius, area, circumference;
    printf("insert the radius: ");
    scanf_s("%f", &radius);
    area = PI * radius * radius;
    circumference = 2.0 * PI * radius;
    printf("radius = %f.\n", radius);
    printf("circle area = %f, circumference = %f\n", area, circumference);
    return 0;
}
```

### 3.

```c
#include <stdio.h>

int main()
{
    const double TAX_RATE = 0.15;
    double income, salary;
    printf("insert your salary:");
    scanf_s("%lf", &salary);
    income = salary - TAX_RATE * salary;
    printf("net income: %lf\n", income);
    return 0;
}
```

### 4.

```c
#include <stdio.h>

int main()
{
    const double TAX_RATE = 0.15;
    double income, salary;
    printf("insert your salary:");
    scanf_s("%lf", &salary);
    income = salary - TAX_RATE * salary;
    printf("net income: %lf\n", income);
    TAX_RATE = 0.20; // Error
    income = salary - TAX_RATE * salary;
    printf("net income: %lf\n", income);
    return 0;
}
```

### 5.

```c
#include <stdio.h>

int main()
{
    char code1 = 'A';
    char code2 = 65;
    printf("character constant=%c\n", code1);
    printf("ASCII 65 is %c\n", code2);
    return 0;
}
```

### 6-1.

```c
#include <stdio.h>

int main()
{
    float x = 1.234567890123456789;
    double y = 1.234567890123456789;
    printf("size of float=%d\n", sizeof(float));
    printf("size of double=%d\n", sizeof(double));
    printf("x = %30.25f\n", x);
    printf("x = %30.25f\n", y);
    return 0;
}
```

### 6-2.

```c
#include <stdio.h>

int main()
{
    float y = 6.5e2;
    printf("y=%f\n", y);
    printf("y=%e\n", y);
    return 0;
}
```

### 7.

```c
#include <stdio.h>

int main()
{
    char x, x1, x2, x3;
    unsigned char y;
    x = -128;
    x1 = x - 1;
    x2 = x - 2;
    x3 = x - 3;
    printf("x = %d\n", x);
    printf("x1 = %d\n", x1);
    printf("x2 = %d\n", x2);
    printf("x3 = %d\n", x3);
    y = 256;
    printf("y = %u\n", y);
    printf("y+1 = %u\n", y + 1);
    printf("y+2 = %u\n", y + 2);
    printf("y+3 = %u\n", y + 3);
    return 0;
}
```

## Homework

### 1. Complete the data type for the following table

| Data type | Variable name | Initial value  |
| --------- | ------------- | -------------- |
| char      | Grade         | 'A'            |
| short     | Weight        | 78kg           |
| int       | Salary        | 2,000,000원    |
| int       | Distance1     | 149,600,000km  |
| long long | Price_of_apt  | 2,200,000,000원|
| float     | Height        | 178.9cm        |
| float     | Distance2     | 2*10^19km      |
| double    | Distance3     | 3*10^123km     |

### 2. Complete the following source code using above table information

See [HW 2](./hw02/main.c)
