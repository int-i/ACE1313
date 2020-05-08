# Pointer 2

## Exercise

### 8.

```c
#include <stdio.h>

void sub(int *p); // 포인터 input을 이용한 sub 선언

int main()
{
    int i = 100;           // 변수 i 선언 및 100 대입
    printf("i = %d\n", i); // 함수 처리 이전의 값 출력
    sub(&i);               // sub 함수 input에 주소 이용
    printf("i = %d\n", i); // 함수 처리 이후의 값 출력
    return 0;
}

void sub(int *p)
{
    *p = 200; // input 주소에 들어있는 값을 200으로
}
```

### 9.

```c
#include <stdio.h>

void swap(int x, int y);

int main()
{
    int a = 100, b = 200;               // 변수 a, b 선언 및 값 대입
    printf("main() a=%d b=%d\n", a, b); // swap 함수 처리 이전의 main 함수의 a, b 출력
    swap(a, b);
    printf("main() a=%d b=%d\n", a, b); // swap 함수 처리 이후의 main 함수의 a, b 출력
    return 0;
}

void swap(int x, int y)
{
    int tmp;                            // swap 함수 내에서 임시로 이용할 변수 선언
    printf("swap() x=%d y=%d\n", x, y); // swap 함수 안에서의 a, b 출력
    tmp = x;                            // x 임시저장
    x = y;                              // x에 y 대입
    y = tmp;                            // y에 임시저장해둔 x 대입
    printf("swap() x=%d y=%d\n", x, y); // swap 함수 안에서의 a, b 출력
}
```

### 10.

```c
#include <stdio.h>

void swap(int *px, int *py);

int main()
{
    int a = 100, b = 200;               // 변수 a, b 선언 및 값 대입
    printf("main() a=%d b=%d\n", a, b); // swap 함수 처리 이전의 main 함수의 a, b 출력
    swap(&a, &b);
    printf("main() a=%d b=%d\n", a, b); // swap 함수 처리 이후의 main 함수의 a, b 출력
    return 0;
}

void swap(int *px, int *py)
{
    int tmp;                                // swap 함수 내에서 임시로 이용할 변수 선언
    printf("swap() x=%d y=%d\n", *px, *py); // swap 함수 안에서의 a, b 출력
    tmp = *px;                              // px 포인터 안에 있던 값 임시저장
    *px = *py;                              // px 포인터 안에 들어있는 값을 py 포인터 안에 들어있는 값으로 변환
    *py = tmp;                              // py 포인터 안에 들어있는 값에 임시 저장해두었던 px 포인터 안에 들어있는 값 대입
    printf("swap() x=%d y=%d\n", *px, *py); // swap 함수 안에서의 a, b 출력
}
```

### 11.

```c
#include <stdio.h>

// 결과값을 포인터 변수로 이용한 addmult 함수 선언
void addmult(int a, int b, int *sum, int *mult)
{
    *sum = a + b;  // sum 주소 안에 값은 a+b
    *mult = a * b; // mult 주소 안에 값은 a*b
    printf("addmult()'s sum = %d, mult = %d\n", *sum, *mult);
    printf("addmult()'s sum address = %u, mult address = %u\n", sum, mult);
    // addmult 함수 안에서의 sum, mult 값과 주소 출력
}

// 결과값을 포인터 변수로 이용하지 않을 때 addmult_not_pointer 함수 선언
void addmult_not_pointer(int a, int b, int sum, int mult)
{
    sum = a + b;  // sum 주소 안에 값은 a+b
    mult = a * b; // mult 주소 안에 값은 a*b
    printf("addmult_not_pointer()'s sum = %d, mult = %d\n", sum, mult);
    printf("addmult_not_pointer()'s sum address = %u, mult address = %u\n", &sum, &mult);
    // addmult_not_pointer 함수 안에서의 sum, mult 값과 주소 출력
}

int main()
{
    int x = 10, y = 20; // 변수 x, y 선언 및 값 대입
    int s, m;
    float s_not_pointer = 0, m_not_pointer = 0;                       // 포인터를 이용하지 않을 때 변수 s, m 선언
    addmult(x, y, &s, &m);                                            // 계산할 값과 결과값 주소를 input으로
    printf("main()'s sum = %d, mult = %d\n", s, m);                   // 결과값 출력
    printf("main()'s sum address = %u, mult address = %u\n", &s, &m); // 주소값 출력
    printf("----------------------------------");
    printf("no pointer:\n");
    addmult_not_pointer(x, y, s_not_pointer, m_not_pointer);                                  // 계산할 값과 결과값을 input으로
    printf("main()'s sum = %d, mult = %d\n", s_not_pointer, m_not_pointer);                   // 결과값 출력
    printf("main()'s sum address = %u, mult address = %u\n", &s_not_pointer, &m_not_pointer); // 주소값 출력
    return 0;
}
```

### 12.

```c
#include <stdio.h>

struct student
{
    int number;
    char name[20];
    double height;
};

int main()
{
    struct student s = {20070001, "홍길동", 180.2}; // 학생 구조체 s 정의
    struct student *p;                              // 학생 구조체 포인터 p 선언
    p = &s;
    printf("학번=%d 이름=%s 키=%f\n", s.number, s.name, s.height);          // s 구조체에 대해 출력
    printf("학번=%d 이름=%s 키=%f\n", (*p).number, (*p).name, (*p).height); // 구조체 포인터 p에 들어있는 값 출력
    printf("학번=%d 이름=%s 키=%f\n", p->number, p->name, p->height);       // 구조체 포인터 p에 들어있는 값 출력
    return 0;
}
```

### 13.

```c
#include <stdio.h>

// 날짜 구조체 선언
struct date
{
    int month;
    int day;
    int year;
};

// 학생 구조체 선언
struct student
{
    int number;
    char name[20];
    double height;
    struct date *dob; // 학생 구조체에 날짜 구조체 포인터 선언
};

// 학생2 구조체 선언
struct student2
{
    int number;
    char name[20];
    double height;
    struct date dob; // 학생 구조체에 날짜 구조체 선언
};

int main()
{
    struct date d = {3, 20, 1980};                 // 날짜 구조체 d 정의
    struct student s = {20070001, "Kim", 180.2};   // 학생 구조체 s 정의
    struct student2 s2 = {20070001, "Kim", 180.2}; // 학생2 구조체 s2 정의
    s.dob = &d;                                    // 구조체 포인터 s.dob에 구조체 주소 대입
    s2.dob = d;                                    // 구조체 s2.dob에 구조체 대입

    printf("SID: %d\n", s.number);
    printf("Name: %s\n", s.name);
    printf("Height: %f\n", s.height);
    printf("Bday: %d. %d. %d.\n", s.dob->year, s.dob->month, s.dob->day);
    printf("Bday: %d. %d. %d.\n", (*s.dob).year, (*s.dob).month, (*s.dob).day);
    // 구조체 s에 대해 출력

    printf("------------------------------\n");
    printf("SID: %d\n", s2.number);
    printf("Name: %s\n", s2.name);
    printf("Height: %f\n", s2.height);
    printf("Bday: %d. %d. %d.\n", (s2.dob).year, (s2.dob).month, (s2.dob).day);
    // 구조체 s2에 대해 출력
    return 0;
}
```

### 14.

```c
#include <stdio.h>

struct student
{
    int number;
    char name[10];
    double height;
    struct student *next; // 학생 구조체에 학생 구조체 포인터 next 선언
};

int main()
{
    struct student s1 = {30, "Kim", 167.2, NULL};  // 학생 구조체 s1 정의
    struct student s2 = {31, "Park", 179.1, NULL}; // 학생 구조체 s2 정의
    struct student *first = NULL;                  // 학생 구조체 포인터 first 선언
    struct student *current = NULL;                // 학생 구조체 포인터 current 선언
    first = &s1;                                   // 구조체 포인터 first에 구조체 s1 주소 대입
    s1.next = &s2;                                 // 구조체 포인터 s1.next에 구조체 s2 주소 대입
    s2.next = NULL;                                // 구조체 포인터 s2.next에 NULL(빈 값) 대입
    current = first;                               // current(현재) = first(첫 번째) = 첫 번째 학생정보

    printf("s1의 주소: %u, s2의 주소: %u\n", &s1, &s2);
    printf("-------------------------------\n");

    while (current != NULL) // current가 빌 때까지 반복
    {
        printf("current의 주소: %u\n", current);                                                      // current의 주소 출력
        printf("SID = %d Name = %s, Height = %f\n", current->number, current->name, current->height); // current(현재) 학생 정보에 대해 출력
        current = current->next;                                                                      // current(현재)의 정보에 next(다음)의 정보 대입
    }
    return 0;
}
```

### 15.

```c
#include <stdio.h>

// 좌표 구조체 선언
struct point
{
    int x;
    int y;
};

// 결과값 구조체 선언
typedef struct result
{
    float slope;
    float yintercept;
    int exception; // 예외 처리에 이용할 변수
} RESULT;

// 포인터를 이용하여 기울기와 절편을 계산하는 함수
// input: 좌표 구조체 p1, p2, 기울기 포인터, y 절편 포인터
int get_line_parameter(struct point p1, struct point p2, float *slope, float *yintercept)
{
    if (p1.x == p2.x) // 두 점의 x좌표가 같으면
        return -1;    // return 값은 -1
    else
    {
        *slope = (float)(p2.y - p1.y) / (float)(p2.x - p1.x); // 기울기 = y 좌표의 변화량 / x 좌표의 변화량
        *yintercept = p1.y - (*slope) * p1.x;                 // y 절편 = y 값 - (기울기 * x 값)
        return 0;                                             // return 값은 0
    }
}

// 포인터를 이용하지 않고 기울기와 절편을 계산하는 함수
// input: 좌표 구조체 p1, p2
RESULT get_line_parameter_not_pointer(struct point p1, struct point p2)
{
    RESULT r;
    if (p1.x == p2.x) // 두 점의 x 좌표가 같으면
    {
        r.exception = -1; // 예외 처리에 이용할 값은 -1로
        return r;         // return data는 구조체 r
    }
    else
    {
        r.slope = (float)(p2.y - p1.y) / (float)(p2.x - p1.x); // 기울기 = y 좌표의 변화량 / x 좌표의 변화량
        r.yintercept = p1.y - (r.slope) * p1.x;                // y 절편 = y 값 - (기울기 * x 값)
        r.exception = 0;                                       // 예외 처리에 이용할 값은 0으로
        return r;                                              // return data는 구조체 r
    }
}

int main()
{
    struct point pt1 = {3, 4}, pt2 = {6, 2};        // 좌표 포인터 pt1, pt2 정의
    float s, y;                                     // 기울기와 y 절편에 이용할 변수
    float s_not_pointer, y_not_pointer;             // 포인터를 사용하지 않을 때의 기울기와 y 절편에 이용할 변수
    if (get_line_parameter(pt1, pt2, &s, &y) == -1) // x 값이 같으면
        printf("error: same x axis.\n"); // 같은 x축 값이라고 출력
    else // x 값이 같지 않으면 기울기와 y 절편 출력
        printf("Gradient is %f, y - intercept is %f\n", s, y);

    printf("---------------------------------------\n");

    s_not_pointer = get_line_parameter_not_pointer(pt1, pt2).slope;      // s_not_pointer(기울기) = 함수의 return 구조체의 slope 값
    y_not_pointer = get_line_parameter_not_pointer(pt1, pt2).yintercept; // y_not_pointer(y 절편) = 함수의 return 구조체의 yintercept 값

    if (get_line_parameter_not_pointer(pt1, pt2).exception == -1) // x 값이 같으면
        printf("error: same x axis.\n"); // 같은 x축 값이라고 출력
    else // x 값이 같지 않으면 기울기와 y 절편 출력
        printf("Gradient is %f, y - intercept is %f\n", s_not_pointer, y_not_pointer);
    return 0;
}
```

## Homework

### 1. Execute the EX#8~15, Then copy the source code(with comment) and results to the reports.

See [Exercise 8~15](./README.md#Exercise)
