# Control Structure 1

## Exercise

### 1.

```c
#include <stdio.h>

int main()
{
    int j = 0;
    while (j <= 10)
    {
        printf("%d\n", j);
        j = j + 1;
    }
    return 0;
}
```

### 2.

```c
#include <stdio.h>

int main()
{
    int i = 1;
    while (i <= 10)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}
```

### 3.

```c
#include <stdio.h>

int main()
{
    int j;
    while (j <= 10)
    {
        printf("%d\n", j);
        j = j + 1;
    }
    return 0;
}
```

### 4.

```c
#include <stdio.h>

int main()
{
    int x = 1;
    while (x == 1)
    {
        x = x - 1;
        printf("\n%d", x);
    }
    return 0;
}
```

### 5.

```c
#include <stdio.h>

int main()
{
    int x = 1;
    while (x == 1)
        x = x - 1;
    printf("\n%d", x);
    return 0;
}
```

### 6.

```c
#include <stdio.h>

int main()
{
    char x;
    for (x = 0; x <= 255; x++)
        printf("\nAscii value %d Character %c", x, x);
    return 0;
}
```

### 7.

```c
#include <stdio.h>

int main()
{
    int x = 4, y, z;
    y = --x;
    z = x--;
    printf("\n%d %d %d", x, y, z);
    return 0;
}
```

### 8.

```c
#include <stdio.h>

int main()
{
    int x = 4, y = 3, z;
    z = x-- - y;
    printf("\n%d %d %d", x, y, z);
    return 0;
}
```

### 9.

```c
#include <stdio.h>

int main()
{
    while ('a' < 'b')
        printf("\nmalyalam is a paindrome");
    return 0;
}
```

### 10.

```c
#include <stdio.h>]

int main()
{
    int i = 10;
    while (i = 20)
        printf("\nA computer buff!");
    return 0;
}
```

### 11.

```c
#include <stdio.h>

int main()
{
    int i;
    while (i = 10)
    {
        printf("\n%d", i);
        i = i + 1;
    }
    return 0;
}
```

### 12.

```c
#include <stdio.h>

int main()
{
    while ('1' < '2')
        printf("\nIn while loop");
    return 0;
}
```

### 13.

```c
#include <stdio.h>

int main()
{
    char x;
    for (x = 0; x <= 255; x++)
        printf("\nAscii value %d Character %c", x, x);
    return 0;
}
```

### 14.

```c
#include <stdio.h>

int main()
{
    int x = 4, y = 0, z;
    while (x >= 0)
    {
        x--;
        y++;
        if (x == y)
            continue;
        else
            printf("\n%d %d", x, y);
    }
    return 0;
}
```

### 15.

```c
#include <stdio.h>

int main()
{
    int x = 4, y = 0, z;
    while (x >= 0)
    {
        if (x == y)
            break;
        else
            printf("\n%d %d", x, y);
        x--;
        y++;
    }
    return 0;
}
```

### 16.

```c
#include <stdio.h>
#define START_DAY 5
#define DAYS_OF_MONTH 31

int main()
{
    int day, date;
    printf("===================================\n");
    printf("Sun. Mon. Tue. Wed. Thu. Fri. Sat. \n");
    printf("===================================\n");
    for (day = 0; day < START_DAY; day++)
        printf("     ");
    for (date = 1; date <= DAYS_OF_MONTH; date++)
    {
        if (day == 7)
        {
            day = 0;
            printf("\n");
        }
        day++;
        printf("%4d ", date);
    }
    printf("\n===================================\n");
    return 0;
}
```

## Homework

### 1. Write a program to calculate the summation of nature number from 1 to 100 using each of the following statements.

#### 1) while

See [HW 1-1](./hw01_01/main.cpp)

#### 2) do-while

See [HW 1-2](./hw01_02/main.cpp)

#### 3) for

See [HW 1-3](./hw01_03/main.cpp)

### 2. Write a program to produce the following output(Using loop statement):

```text
ABCDEFGFEDCBA
ABCDEF FEDCBA
ABCDE   EDCBA
ABCD     DCBA
ABC       CBA
AB         BA
A           A
```

See [HW 2](./hw02/main.cpp)

### 3. Write a program to calculate the following equations:

#### 1) ![Equation](./equation01.png)

See [HW 3-1](./hw03_01/main.cpp)

#### 2) ![Equation](./equation02.png)

See [HW 3-2](./hw03_02/main.cpp)
