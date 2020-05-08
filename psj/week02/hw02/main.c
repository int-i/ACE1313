#include <stdio.h>

int main() {
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
