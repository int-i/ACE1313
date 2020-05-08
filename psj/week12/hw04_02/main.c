#include <stdio.h>
#define SIZE 5

enum menu {
    LOAD = 1,
    SHOW,
    BEST_SCORE,
    MALE_STUDENT,
    FEMALE_STUDENT,
    CHANGE
};

struct student {
    char name[20];
    int id;
    char sex;
    int kor, eng, math;
};

struct student students[SIZE];

void load() {
    printf("enter data for 5 students (name id sex korean english math scores)\n");
    for (int i = 0; i < SIZE; i += 1) {
        scanf("%s %d %c %d %d %d", &students[i].name, &students[i].id, &students[i].sex, &students[i].kor, &students[i].eng, &students[i].math);
    }
}

void show(struct student student) {
    printf("name: %s, id: %d, sex: %c, kor: %d, eng: %d, math: %d\n", student.name, student.id, student.sex, student.kor, student.eng, student.math);
}

void show_all() {
    for (int i = 0; i < SIZE; i += 1) {
        show(students[i]);
    }
}

void show_best_score() {
    int max_kor_index = 0;
    int max_kor_score = students[0].kor;
    for (int i = 1; i < SIZE; i += 1) {
        if (students[i].kor > max_kor_score) {
            max_kor_index = i;
            max_kor_score = students[i].kor;
        }
    }
    printf("best score for korean: %s %d\n", students[max_kor_index].name, max_kor_score);
    int max_eng_index = 0;
    int max_eng_score = students[0].eng;
    for (int i = 1; i < SIZE; i += 1) {
        if (students[i].eng > max_eng_score) {
            max_eng_index = i;
            max_eng_score = students[i].eng;
        }
    }
    printf("best score for english: %s %d\n", students[max_eng_index].name, max_eng_score);
    int max_math_index = 0;
    int max_math_score = students[0].math;
    for (int i = 1; i < SIZE; i += 1) {
        if (students[i].math > max_math_score) {
            max_math_index = i;
            max_math_score = students[i].math;
        }
    }
    printf("best score for math: %s %d\n", students[max_math_index].name, max_math_score);
}

void show_male_student() {
    printf("The data for male students\n");
    for (int i = 0; i < SIZE; i += 1) {
        if (students[i].sex == 'M') {
            show(students[i]);
        }
    }
}

void show_female_student() {
    printf("The data for female students\n");
    for (int i = 0; i < SIZE; i += 1) {
        if (students[i].sex == 'F') {
            show(students[i]);
        }
    }
}

void change() {
    int target;
    printf("enter student ID\n");
    scanf("%d", &target);
    for (int i = 0; i < SIZE; i += 1) {
        if (students[i].id == target) {
            printf("enter new data(name id sex korean english math)\n");
            scanf("%s %d %c %d %d %d", &students[i].name, &students[i].id, &students[i].sex, &students[i].kor, &students[i].eng, &students[i].math);
        }
    }
}

void main() {
    while (1) {
        int select;
        printf("1. load 2. show 3. best score 4. male students 5. female students 6. change\n");
        printf("select menu\n");
        scanf("%d", &select);
        switch (select) {
        case LOAD:
            load();
            break;
        case SHOW:
            show_all();
            break;
        case BEST_SCORE:
            show_best_score();
            break;
        case MALE_STUDENT:
            show_male_student();
            break;
        case FEMALE_STUDENT:
            show_female_student();
            break;
        case CHANGE:
            change();
            break;
        }
    }
}
