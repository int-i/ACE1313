# Pointer 1

## Exercise

### 1.

```c
#include <stdio.h>

int main()
{
    int n = 10;                                // 변수 n 선언 및 대입
    int *m;                                    // 포인터 변수 m 선언
    m = &n;                                    // m에 n의 주소 대입
    printf("address: %d, value: %d\n", m, *m); // 주소 변수 m 값 및 주소에 들어있던 값 출력
    n = 100;
    printf("address: %d, value: %d\n", m, *m); // 주소 변수 m 값 및 주소에 들어있던 값 출력
    return 0;
}
```

### 2.

```c
#include <stdio.h>

int main()
{
    char c = 'A';    // char 타입 변수 선언
    int i = 10000;   // int 타입 변수 선언
    double d = 6.78; // double 타입 변수 선언
    char *pc = &c;   // c의 주소로 이용할 포인터 변수 선언
    int *pi = &i;    // i의 주소로 이용할 포인터 변수 선언
    double *pd = &d; // d의 주소로 이용할 포인터 변수 선언
    (*pc)++;
    *pi = *pi + 1;
    *pd += 1;
    // 각 주소 안에 들어있는 값에 1씩 더해줌
    // 처음 선언했던 변수들의 변화한 값 출력
    printf("c = %c\n", c);
    printf("i = %d\n", i);
    printf("d = %f\n", d);
    return 0;
}
```

### 3.

```c
#include <stdio.h>

int main()
{
    int i = 10000; // 변수 i 선언 및 10000 대입
    int *p, *q;    // 포인터 변수 p, q 선언
    p = &i;
    q = &i;
    // 포인터 변수에 변수 i의 주소 대입
    *p = *p + 1;
    *q = *q + 1;
    // 각 주소 안에 들어있는 값에 1씩 더해줌
    // i = 10000 -> 10001 -> 10002
    printf("i = %d\n", i); // 바뀐 i 값 출력
    return 0;
}
```

### 4.

```c
#include <stdio.h>

int main()
{
    int i;      // 변수 i 선언
    double *pd; // double 타입 포인터 변수 pd 선언
    pd = &i;    // ERROR! double 타인 포인터 변수에 int 타입 변수를 사용하면 에러
    *pd = 36.5; // pd 주소에 있는 값을 36.5로
    return 0;
}
```

### 5.

```c
#include <stdio.h>

int main()
{
    int a[] = {10, 20, 30, 40, 50}; // 배열 a 선언
    // %d 부호 있는 10진수 출력
    // %u 부호 없는 10진수 출력
    printf("&a[0] = %u\n", &a[0]); // a 배열의 첫 번째 원소 주소 출력
    printf("&a[1] = %u\n", &a[1]); // a 배열의 두 번째 원소 주소 출력
    printf("&a[2] = %u\n", &a[2]); // a 배열의 세 번째 원소 주소 출력
    printf("a = %u\n", a);         // 배열 이름 a를 그냥 출력하면 첫 번째 원소 주소 출력
    return 0;
}
```

### 6.

```c
#include <stdio.h>

int main()
{
    int a[] = {10, 20, 30, 40, 50};    // 배열 a선언
    printf("a = %u\n", a);             // 배열 이름 a를 그냥 출력하면 첫 번째 원소 주소를 출력
    printf("a + 1 = %u\n", a + 1);     // (첫 번째 원소 주소 + 1)을 출력
    printf("*a = %d\n", *a);           // a 주소안에 들어있는 값을 그냥 출력하면 첫 번째 원소 값을 출력
    printf("*(a+1) = %d\n", *(a + 1)); // (a+1) 주소안에 들어있는 값을 그냥 출력하면 두 번째 원소 값을 출력
    return 0;
}
```

### 7.

```c
#include <stdio.h>

int main()
{
    int a[] = {10, 20, 30, 40, 50};                          // 배열 a 선언
    int *p;                                                  // 포인터 변수 p 선언
    p = a;                                                   // p 주소는 a 배열 주소
    printf("a = %d, p = %d\n", a, p);                        // a 배열의 주소와 포인터 변수 p의 주소 출력
    printf("a[0]=%d a[1]=%d a[2]=%d\n", a[0], a[1], a[2]);   // a배열의 원소의 값 출력
    printf("p[0]=%d p[1]=%d p[2]=%d\n\n", p[0], p[1], p[2]); // 배열과 포인터가 동일시 되었음을 확인
    p[0] = 60;                                               // p[0]의 값을 바꿈
    p[1] = 70;                                               // p[1]의 값을 바꿈
    p[2] = 80;                                               // p[2]의 값을 바꿈
    // 배열과 포인터의 값이 바뀜과 동일시 되었음을 확인
    printf("a[0]=%d a[1]=%d a[2]=%d\n", a[0], a[1], a[2]);
    printf("p[0]=%d p[1]=%d p[2]=%d\n", p[0], p[1], p[2]);
    return 0;
}
```

## Homework

### 1. Execute the EX#1~7, Then copy the source code(with comment) and results to the reports.

See [Exercise 1~7](./README.md#Exercise)
