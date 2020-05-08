#include <stdio.h> // include the stdio header file

int N = 1000; // define new global variable and initialize it to 1000
int cal_sum(); // function protoype

void main() {
    int sum; // define new variable
    sum = cal_sum(); // initialize the result of cal_sum
    { // begin a block scope
        int k; // define new variable
        k = 9; // initialize to 9
        printf("k = %d\n", k); // print k
    } // end the block scope
    printf("sum of first %d natural numbers is %d\n", N, sum); // print N and sum
}

int cal_sum() { // define new function
    int i, s = 0; // define new
    for (i = 0; i <= N; i++) { // loop N+1, begin a block scope
        s = s + i; // s += i
    } // end the block scope
    return s; // return s
}
