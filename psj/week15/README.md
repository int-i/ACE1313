# Memory Allocation & File IO

## Exercise

### 1.

```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *pc = NULL;
    pc = (char *)malloc(sizeof(char));
    if (pc == NULL)
    {
        printf("MEMORY ALLOCATION ERROR\n");
        exit(1);
    }
    *pc = 'm';
    printf("*pc = %c\n", *pc);
    free(pc);
    return 0;
}

```

### 2.

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *pc = NULL;
    int i = 0;
    pc = (char *)malloc(100 * sizeof(char));
    if (pc == NULL)
    {
        printf("memory error\n");
        exit(1);
    }
    for (i = 0; i < 26; i++)
    {
        *(pc + i) = 'a' + i;
    }
    *(pc + i) = 0;
    printf("%s\n", pc);
    free(pc);
    return 0;
}
```

### 3.

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pi;
    int *pa;
    pi = (int *)malloc(5 * sizeof(int));
    pa = (int *)malloc(5 * sizeof(int));
    if (pi == NULL)
    {
        printf("메모리 할당 오류\n");
        exit(1);
    }
    pi[0] = 100;
    pi[1] = 200;
    pi[2] = 300;
    pi[3] = 400;
    pi[4] = 500;
    pa[0] = 100;
    pa[1] = 200;
    pa[2] = 300;
    pa[3] = 400;
    pa[4] = 500;
    printf("%d\n", *pi);
    printf("%d\n", *(pi + 3));
    printf("%d\n", *pa);
    free(pi);
    return 0;
}
```

### 4.

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book
{
    int number;
    char title[30];
};

int main()
{
    struct Book *p;
    p = (struct Book *)malloc(2 * sizeof(struct Book));
    if (p == NULL)
    {
        printf("memory error\n");
        exit(1);
    }
    p->number = 1;
    strcpy(p->title, "C/C++ Programming");
    (p + 1)->number = 2;
    strcpy((p + 1)->title, "Data Structure");
    printf("%d\n", p->number);
    printf("%s\n", p->title);
    printf("%d\n", (p + 1)->number);
    printf("%s\n", (p + 1)->title);
    free(p);
    return 0;
}
```

### 5.

```c
#include <stdio.h>

int main(void)
{
    FILE *fp = NULL;
    fopen_s(&fp, "sample.txt", "w");
    if (fp == NULL)
        printf("fail\n");
    else
        printf("success\n");
    fclose(fp);
    return 0;
}
```

### 6.

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char fname[100];
    int sid, count = 0;
    char name[20];
    float score, total = 0.0;
    printf("enter the socre file name : ");
    scanf_s("%s", &fname);
    fopen_s(&fp, fname, "w");
    if (fp == NULL)
    {
        fprintf(stderr, " can not open the %s file.\n ", fname);
        exit(1);
    }
    while (1)
    {
        printf("enter the sid, name, score:");
        scanf_s("%d", &sid);
        if (sid < 0)
            break;
        scanf_s("%s %d", &name, &score);
        fprintf(fp, "%d %s %f\n", sid, name, score);
    }
    fclose(fp);
    fopen_s(&fp, fname, "r");
    if (fp == NULL)
    {
        fprintf(stderr, " can not open the %s file.\n ", fname);
        printf("can not open the %s file.\n ", fname);
        exit(1);
    }
    while (1)
    {
        fscanf_s(fp, "%d %s %f", &sid, sizeof(sid), name, sizeof(name), &score, sizeof(score));
        if (feof(fp))
            break;
        printf("%d %s %f\n", sid, name, score);
        total += score;
        count++;
    }
    printf("average = %f\n", total / count);
    fclose(fp);
    return 0;
}
```

## Project

### 1. Design an electronic library system.

- Menu
  1. show a book
  2. show all books
  3. insert a book
  4. remove a book
  5. change a book
  6. borrow a book
  7. return a book
  8. show a member
  9. show all members
  10. insert a member
  11. remove a member
  12. change a member
  13. quit
- Store the book and member information to the `book.txt` and `member.txt` file.
- Store the borrow and return information to the `manage.txt` file.

#### Sol 1. Written in C

See [HW 1(C)](./hw01/main.c)

#### Sol 2. Written in C++(with STL vector)

You can make a variable-length array by using [`#include <vector>`](http://www.cplusplus.com/reference/vector/vector/).

See [HW 1(C++)](./hw01/main.cpp)
