# Array 2

## Exercise

### 6. Binary Search

```cpp
#include <iostream>
#define SIZE 10

using namespace std;

int binary_search(int list[], int n, int key)
{
    int low, high, middle;
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        middle = (low + high) / 2;
        cout << "middle = " << middle << endl;
        if (key == list[middle])
            return middle;
        else if (key > list[middle])
            low = middle + 1;
        else
            high = middle - 1;
    }
    return -1;
}

int main()
{
    int grade[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int key;
    cout << "탐색할 값을 입력하시오." << endl;
    cin >> key;
    cout << "탐색결과 = " << binary_search(grade, SIZE, key) << endl;
    return 0;
}
```

### 7. 2D Array Average

```cpp
#include <iostream>
#define CLASSES 3
#define STUDENTS 5

using namespace std;

int main()
{
    int s[CLASSES][STUDENTS] = {
        {0, 1, 2, 3, 4},
        {10, 11, 12, 13, 14},
        {20, 21, 22, 23, 24}
    };
    int clas, student, subtotal, total;
    total = 0;
    for (clas = 0; clas < CLASSES; clas += 1)
    {
        subtotal = 0;
        for (student = 0; student < STUDENTS; student += 1)
            subtotal += s[clas][student];
        cout << "학급 " << clas << "의 평균 성적 = " << subtotal / STUDENTS << endl;
        total += subtotal;
    }
    cout << "전체 학생들의 평균 성적 = " << total / (CLASSES * STUDENTS) << endl;
    return 0;
}
```

## Homework

### 1. Declare a 20x20 array and provide following services. Use as many functions as possible.

1. fill: fill the array using rand()%100
2. show: show the array
3. row sum: read a row number and show the sum of that row
4. col sum: read a column number and show the sum of that column
5. diagonal sum: show the diagonal sum
6. backward diagonal sum: show the backward diagonal sum
7. row max: read a row number and show the max of that row
8. col max: read a column number and show the max of that column
9. max row: find the row whose sum is the greatest
10. max col: find the column whose sum is the greatest

See [HW 1](./hw01/main.cpp)
