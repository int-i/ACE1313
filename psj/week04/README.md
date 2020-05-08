# Control Structure 2

## Exercise

### 1.

```c
#include <stdio.h>

int main()
{
    char suite = 3;
    switch (suite)
    {
    case 1:
        printf("\nDiamond");
    case 2:
        printf("\nSpade");
    case 3:
        printf("\nHeart");
    }
    printf("\nI thought one wears a suite");
    return 0;
}
```

### 2.

```c
#include <stdio.h>

int main()
{
    int c = 3;
    switch (c)
    {
    case 'v':
        printf("I am in case v\n");
        break;
    case 3:
        printf("I am in case 3\n");
        break;
    case 12:
        printf("I am in case 12\n");
        break;
    default:
        printf("I am in default\n");
    }
    return 0;
}
```

### 3.

```c
#include <stdio.h>

int main()
{
    int k, j = 2;
    switch (k = j + 1)
    {
    case 0:
        printf("\nTailor");
        break;
    case 1:
        printf("\nTutor");
        break;
    case 2:
        printf("\nTramp");
        break;
    default:
        printf("\nPure Simple Egghead!");
    }
    return 0;
}
```

### 4.

```c
#include <stdio.h>

int main()
{
    int i = 0;
    switch (i)
    {
    case 0:
        printf("\nCustomers are dicey");
        break;
    case 1:
        printf("\nMarkets are pricey");
        break;
    case 2:
        printf("\nInvestors are moody");
        break;
    case 3:
        printf("\nAt least employees are good");
    }
    return 0;
}
```

### 5.

```c
#include <stdio.h>

int main()
{
    int k;
    float j = 2.0;
    switch (k = j + 1)
    {
    case 3:
        printf("\nTrapped");
        break;
    default:
        printf("\nCaught!");
    }
    return 0;
}
```

### 6.

```c
#include <stdio.h>

int main()
{
    int ch = 'a' + 'b';
    switch (ch)
    {
    case 'a':
    case 'b':
        printf("\nYou entered b");
        break;
    case 'A':
        printf("\na as in ashar");
    case 'b' + 'a':
        printf("\nYou entered a and b");
    }
    return 0;
}
```

### 7.

```c
#include <stdio.h>

int main()
{
    int i = 1;
    switch (i - 2)
    {
    case -1:
        printf("\nFeeding fish");
    case 0:
        printf("\nWeeding grass");
    case 1:
        printf("\nmending roof");
    default:
        printf("\nJust to survive");
    }
    return 0;
}
```

## Homework

### 1. Print out the errors, if any, in the following programs:

#### 1)

See [HW 1-1](./hw01_01/main.cpp)

#### 2)

See [HW 1-2](./hw01_02/main.cpp)

#### 3)

See [HW 1-3](./hw01_03/main.cpp)

#### 4)

See [HW 1-4](./hw01_04/main.cpp)

### 2. Write a program that converts uppercase characters to lowercase and passed non-uppercase characters unchanged.

> 조건: switch, ASCII Table 이용할 것

See [HW 2](./hw02/main.cpp)
