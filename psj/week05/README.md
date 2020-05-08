# Review

## Exercise

### 2-1.

```c
#include <stdio.h>

int main()
{
    char Grade = 65;                                 // declaration and initialization for variable grade
    short Weight = 78;                               // declaration and initialization for variable weight
    int Salary = 2000000;                            // declaration and initialization for variable salary
    int Distance1 = 149600000;                       // declaration and initialization for variable distance1
    long long Price_of_apt = 2200000000;             // declaration and initialization for variable price_of_apt
    float Height = 178.9;                            // declaration and initialization for variable height
    float Distance2 = 2e19;                          // declaration and initialization for variable distance2
    double Distance3 = 3e123;                        // declaration and initialization for variable distance3
    printf("Grade = '%c'\n", Grade);                 // print the variable grade using ASCII code
    printf("Weight = %dkg\n", Weight);               // print the variable weight
    printf("Salary = %d원\n", Salary);               // print the variable salary
    printf("Distance1 = %dkm\n", Distance1);         // print the variable distance1
    printf("Price_of_apt = %lld원\n", Price_of_apt); // print the variable price_of_apt
    printf("Height = %.1fcm\n", Height);             // print the variable height
    printf("Distance2 = %ekm\n", Distance2);         // print the variable distance2
    printf("Distance3 = %ekm\n", Distance3);         // print the variable distance3
    return 0;
}
```

### 2-2.

```cpp
#include <iostream>

using namespace std;

int main()
{
    char Grade = 65;                                           // declaration and initialization for variable grade
    short Weight = 78;                                         // declaration and initialization for variable weight
    int Salary = 2000000;                                      // declaration and initialization for variable salary
    int Distance1 = 149600000;                                 // declaration and initialization for variable distance1
    long long Price_of_apt = 2200000000;                       // declaration and initialization for variable price_of_apt
    float Height = 178.9;                                      // declaration and initialization for variable height
    float Distance2 = 2e19;                                    // declaration and initialization for variable distance2
    double Distance3 = 3e123;                                  // declaration and initialization for variable distance3
    cout << "Grade = '" << Grade << "'" << endl;               // print the variable grade using ASCII code
    cout << "Weight = " << Weight << "kg" << endl;             // print the variable weight
    cout << "Salary = " << Salary << "원" << endl;             // print the variable salary
    cout << "Distance1 = " << Distance1 << "km" << endl;       // print the variable distance1
    cout << "Price_of_apt = " << Price_of_apt << "원" << endl; // print the variable price_of_apt
    cout << "Height = " << Height << "cm" << endl;             // print the variable height
    cout << "Distance2 = " << Distance2 << "km" << endl;       // print the variable distance2
    cout << "Distance3 = " << Distance3 << "km" << endl;       // print the variable distance3
    return 0;
}
```

### 3-1-1.

```cpp
#include <iostream>

using namespace std;

int main()
{
    int n = 1;
    int sum = 0;
    while (n <= 100)
    {
        sum += n;
        n += 1;
    }
    cout << sum << endl;
    return 0;
}
```

### 3-1-2.

```cpp
#include <iostream>

using namespace std;

int main()
{
    int n = 1;
    int sum = 0;
    do
    {
        sum += n;
        n += 1;
    } while (n <= 100);
    cout << sum << endl;
    return 0;
}
```

### 3-1-3.

```cpp
#include <iostream>

using namespace std;

int main()
{
    int n = 1;
    int sum = 0;
    for (n = 0; n <= 100; n += 1)
    {
        sum += n;
    }
    cout << sum << endl;
    return 0;
}
```

### 3-2.

```c
#include <stdio.h>

int main()
{
    for (int i = 0; i < 7; i += 1)
    {
        char c = 'A';
        for (int j = 0; j < 13; j += 1)
        {
            if (j < 7)
            {
                if (i + j <= 6)
                {
                    printf("%c", c + j);
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                if (i + 6 <= j)
                {
                    printf("%c", c + 12 - j);
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
```

### 3-3-1.

```cpp
#include <iostream>

using namespace std;

int main()
{
    int s1 = 0;
    for (int i = 1; i <= 30; i += 1)
    {
        s1 += i * i + 1;
    }
    cout << s1 << endl;
    return 0;
}
```

### 3-3-2.

```cpp
#include <iostream>
using namespace std;
int main()
{
    int s2 = 0;
    for (int i = 10; i <= 30; i += 1)
    {
        for (int j = 0; j <= 5; j += 1)
        {
            s2 += i * j;
        }
    }
    cout << s2 << endl;
    return 0;
}
```

### 4-1-1.

```c
#include <stdio.h>

int main()
{
    int suite = 1;
    switch (suite)
    {
    case 0:
        printf("\nClub");
    case 1:
        printf("\nDiamond");
    }
    return 0;
}
```

### 4-1-2.

```c
#include <stdio.h>

int main()
{
    int temp;
    scanf("%d", &temp);
    if (temp <= 20)
    {
        printf("\nOooooooooh! Damn cool!");
    }
    else if (temp > 20 && temp <= 30)
    {
        printf("\nRain rain here again");
    }
    else if (temp > 30 && temp <= 40)
    {
        printf("\nWish I am on Everest");
    }
    else
    {
        printf("\nGood old nagpur weather");
    }
    return 0;
}
```

### 4-1-3.

```c
#include <stdio.h>

int main()
{
    float a = 3.5;
    switch ((int)(a * 10))
    {
    case 5:
        printf("\nThe art of C");
        break;
    case 15:
        printf("\nThe spirit of C");
        break;
    case 25:
        printf("\nSee through C");
        break;
    case 35:
        printf("\nSimply c");
        break;
    }
    return 0;
}
```

### 4-1-4.

```c
#include <stdio.h>

int main()
{
    int a = 3, b = 4, c;
    c = b - a;
    switch (c)
    {
    case 1:
    case 2:
        printf("God give me an opportunity to change things");
        break;
    case 3:
    case 4:
        printf("God give me an opportunity to run my show");
        break;
    }
    return 0;
}
```

### 4-2.

```cpp
#include <iostream>

using namespace std;

int main()
{
    while (1)
    {
        char c;
        cin >> c;
        int a;
        if (c >= 65 && c <= 90)
            a = 1;
        else if (c >= 97 && c <= 122)
            a = 2;
        else
            a = 3;
        switch (a)
        {
        case 1:
            printf("입력한 문자는 대문자이며 소문자로는 %c입니다.\n\n", c + 32);
            break;
        case 2:
            printf("입력한 문자는 소문자이며 %c입니다.\n\n", c);
            break;
        case 3:
            printf("잘못 입력하셨습니다.\n\n", c);
            break;
        }
    }
    return 0;
}
```

## Homework

### 1. Variables

#### 1) Declare two integer variables: x and y. Store 10 and 20 to x and y. Output the values.

See [HW 1-1](./hw01_01/main.cpp)

#### 2) Modify 1) such that the program stores the sum of x and y into another variable, z. Output z

See [HW 1-2](./hw01_02/main.cpp)

#### 3) Modify 1) such that the program displays the result of x+y, x-y, x*y, and x/y.

See [HW 1-3](./hw01_03/main.cpp)

#### 4) Declare the float constant pi. Store 3.14 to pi.

See [HW 1-4](./hw01_04/main.cpp)

### 2. Basic function

#### 1) Read two integers and display in reverse.

See [HW 2-1](./hw02_01/main.cpp)

#### 2) Read two numbers and display the result of sum, sub, multiplication, division.

See [HW 2-2](./hw02_02/main.cpp)

### 3. if-else or switch

#### 1) Read 3 numbers and display the biggest one.

See [HW 3-1](./hw03_01/main.cpp)

#### 2) Read two numbers and tell if the first one is a factor of the second one.

See [HW 3-2](./hw03_02/main.cpp)

#### 3) Design the following menu system. Your code should display "there is no such menu" if the user selects an illegal menu.

See [HW 3-3](./hw03_03/main.cpp)

#### 4) Implement following menu system.

```text
food
  Korean
    Rice, Bulgogi
  American
    Hamburger, Salad
  Chinese
    Noodle, Dimsum
drink
  Cola, Orange juice, Water
```

See [HW 3-4](./hw03_04/main.cpp)

### 4. Loop statements

#### 1) Read 10 numbers and output the maximum and its location.

See [HW 4-1](./hw04_01/main.cpp)

#### 2) Read two number and display the bigger one. Repeat until the two numbers are same.

See [HW 4-2](./hw04_02/main.cpp)

#### 3) Write a calculator as follows.

See [HW 4-3](./hw04_03/main.cpp)
