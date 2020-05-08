# Structure 1

## Exercise

### 1. Basic Stuct

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    int number;
    char name[10];
    double height;
};

int main()
{
    struct student s;
    s.number = 12180000;
    strcpy(s.name, "댕댕이");
    s.height = 170.2;
    printf("sid: %d\n", s.number);
    printf("name: %s\n", s.name);
    printf("height: %5.1f\n", s.height);
    return 0;
}
```

### 2. Basic Stuct

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    int korean;
    int english;
    int math;
};

int main()
{
    struct student x, y;
    x.korean = 80;
    x.english = 90;
    x.math = 70;
    printf("x의 국어, 영어, 수학 점수: %d, %d, %d\n", x.korean, x.english, x.math);
    scanf("%d %d %d", &y.korean, &y.english, &y.math);
    printf("y의 국어, 영어, 수학 점수: %d, %d, %d\n", y.korean, y.english, y.math);
    return 0;
}
```

### 3. Basic Stuct

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 3

struct student
{
    int number;
    char name[10];
    double height;
};

int main()
{
    struct student list[SIZE];
    int i;
    for (i = 0; i < SIZE; i++)
    {
        printf("Enter the student ID: ");
        scanf("%d", &list[i].number);
        printf("Enter the name: ");
        scanf("%s", list[i].name, sizeof(list[i].name));
        printf("Enter the height(floating point): ");
        scanf("%lf", &list[i].height);
        printf("\n");
    }
    for (i = 0; i < SIZE; i++)
        printf("SID: %d, Name: %s, Height: %f\n", list[i].number, list[i].name, list[i].height);
    return 0;
}
```

### 4. Stuct with Function

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct vector
{
    float x;
    float y;
};

struct vector get_vector_sum(struct vector a, struct vector b);

int main()
{
    struct vector a = {2.0, 3.0};
    struct vector b = {5.0, 6.0};
    struct vector sum;
    sum = get_vector_sum(a, b);
    printf("Vector Sum is (%lf, %lf)\n", sum.x, sum.y);
    return 0;
}

struct vector get_vector_sum(struct vector a, struct vector b)
{
    struct vector result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    return result;
}
```
