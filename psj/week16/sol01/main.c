#include <stdio.h>
#include <string.h>

struct date {
    int year;
    int month;
    int day;
};

struct student {
    int sid;
    char name[10];
    float height;
    struct date* birthday;
};

int main() {
    struct date birthday = { 1991, 3, 29 };
    struct student who;
    who.sid = 43;
    strcpy(who.name, "배주현");
    who.height = 158.0;
    who.birthday = &birthday;
    printf("sid: %d\n", who.sid);
    printf("name: %s\n", who.name);
    printf("height: %.1f\n", who.height);
    printf("birthday: %d-%d-%d\n", who.birthday->year, who.birthday->month, who.birthday->day);
    return 0;
}
