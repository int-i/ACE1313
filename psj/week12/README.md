# Structure 2

## Exercise

### 5. Basic Union

```c
#include <stdio.h>

union example
{
    int i;
    char c;
};

int main()
{
    union example v;
    v.i = 100;
    printf("v.c: %c, v.i: %i\n", v.c, v.i);
    v.c = 'A';
    printf("v.c: %c, v.i: %i\n", v.c, v.i);
}
```

### 6. Basic Union

```c
#include <stdio.h>

union ip_address
{
    unsigned long laddr;
    unsigned char saddr[4];
};

int main()
{
    union ip_address addr;
    addr.saddr[0] = 1;
    addr.saddr[1] = 0;
    addr.saddr[2] = 0;
    addr.saddr[3] = 127;
    printf("addr.saddr address = %d\n", addr.saddr);
    printf("addr.saddr[0] address = %d\n", &addr.saddr[0]);
    printf("addr.saddr[1] address = %d\n", &addr.saddr[1]);
    printf("%x\n", addr.laddr);
    printf("%d\n", &addr.laddr);
    printf("%x\n", addr.saddr[3]);
    return 0;
}
```

### 7. Nested Union

```c
#include <stdio.h>
#include <string.h>
#define STU_NUMBER 1
#define REG_NUMBER 2

struct student
{
    int type;
    union
    {
        int stu_number;      // Student ID (SID)
        char reg_number[15]; // Registration ID (RID)
    } id;
    char name[20];
};

void print(struct student s)
{
    switch (s.type)
    {
    case STU_NUMBER:
        printf("SID : %d\n", s.id.stu_number);
        printf("Name: %s\n", s.name);
        break;
    case REG_NUMBER:
        printf("RID : %s\n", s.id.reg_number);
        printf("Name: %s\n", s.name);
        break;
    default:
        printf("type error\n");
    }
}

int main()
{
    struct student s1, s2;
    s1.type = STU_NUMBER;
    s1.id.stu_number = 20070001;
    strcpy(s1.name, "Hong");
    s2.type = REG_NUMBER;
    strcpy(s2.id.reg_number, "860101-1058031");
    strcpy(s2.name, "Kim");
    print(s1);
    print(s2);
    return 0;
}
```

### 8. Basic Enum

```c
#include <stdio.h>

enum days { SUN, MON, TUE, WED, THU, FRI, SAT };
enum colors { white, red, blue, green, black };
enum boolean { False, True };
enum months { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };
enum major { COMMUNICATION, COMPUTER, ELECTRIC, ELECTRONICS };
enum component { MAIN_BOARD, CPU, GRAPHIC_CARD, DISK, MEMORY };
enum levels { low = 1, medium, high };
enum CarOptions
{
	SunRoof = 0x01,
	Spoiler = 0x02,
	FogLights = 0x04,
	TintedWindows = 0x08,
};

int main()
{
    enum days days1;
    days1 = FRI;
    int days2;
    days2 = WED;
    if (days1 == 5)
        printf("Friday\n");
    if (days2 == 3)
        printf("Wednesday\n");
    return 0;
}
```

### 9. Enum with Switch

```c
#include <stdio.h>

enum tvtype { LCD, LED, PDP, TD };

int main()
{
    enum tvtype type;
    printf("Enter the type of TV: ");
    scanf("%d", &type);
    switch (type)
    {
    case LCD:
        printf("LCD TV.\n");
        break;
    case LED:
        printf("LED TV.\n");
        break;
    case PDP:
        printf("PDP TV.\n");
        break;
    case TD:
        printf("TD TV.\n");
        break;
    default:
        printf("reselect the TV type.\n");
        break;
    }
    return 0;
}
```

### 10. Struct with Function

```c
#include <stdio.h>

typedef struct point
{
    int x;
    int y;
} POINT;

POINT translate(POINT p, POINT delta);

int main(void)
{
    POINT p = {2, 3};
    POINT delta = {10, 10};
    POINT result;
    result = translate(p, delta);
    printf("Coordinate of the new pointL (%d, %d)\n", result.x, result.y);
}

POINT translate(POINT p, POINT delta)
{
    POINT new_p;
    new_p.x = p.x + delta.x;
    new_p.y = p.y + delta.y;
    return new_p;
}
```

### 11. Union & Struct Size

```c
#include <stdio.h>
#pragma pack(4)

union test {
    int a;
    double b;
    char names[9];
};

struct test1
{
    double a;
    char b;
    short c;
    int d;
};

struct test2
{
    char a;
    double b;
    short c;
    int d;
};

int main()
{
    printf("%d\n", sizeof(union test));
    printf("%d\n", sizeof(struct test1));
    printf("%d\n", sizeof(struct test2));
}
```

## Homework

### 1. Define three student variables. Read the scores for the three students and display the score report.

See [HW 1](./hw01/main.cpp)

### 2. Same as 1), but extend the student struct to include id, age and sex for each student.

See [HW 2](./hw02/main.cpp)

### 3. Same as 2), but add name to each student. Use string for the name. Enter student name, ID, age, sex(M for man, F for woman), and korean, english, math scores for 3 students.

See [HW 3](./hw03/main.cpp)

### 4. Follow the instructions below.

```c
struct student {
    char name[20];
    int id;
    char sex;
    int kor, eng, math;
};

void main() {
    struct student std[5]; // 5 students
    int i;
    printf("enter name, id, sex, kor, eng, math for 5 students\n");
    for (i = 0; i < 5; i++) { // read data for each student
        printf("student %d: ", i);
        scanf(" %s %d %c %d %d %d", &std[i].name, &std[i].id, &std[i].sex, &std[i].kor, &std[i].eng, &std[i].math);
    }
    // now display
    printf("now displaying the students\n");
    for (i = 0; i < 5; i++) {
        printf("student %d\n", i);
        printf("name: %s student ID : %d sex : %c\n", std[i].name, std[i].id, std[i].sex);
        printf("kor score : %d eng score : %d math score : %d\n", std[i].kor, std[i].eng, std[i].math);
    }
}
```

#### 1) Try the given code.

See [HW 4-1](./hw04_01/main.c)

#### 2) Implement student data management system. Define the "student array" to global.

See [HW 4-2](./hw04_02/main.c)
