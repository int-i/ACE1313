#include <stdio.h>

int main() {
    FILE* student_file = fopen("student.txt", "r");
    if (student_file != NULL) {
        char name[10];
        int korean, math, english;
        int korean_total = 0;
        int math_total = 0;
        int english_total = 0;
        for (int i = 0; i < 4; i += 1) {
            fscanf(student_file, "%s %d %d %d", &name, &korean, &math, &english);
            korean_total += korean;
            math_total += math;
            english_total += english;
        }
        float korean_mean = (float) korean_total / 4.0;
        float math_mean = (float) math_total / 4.0;
        float english_mean = (float) english_total / 4.0;
        printf("%f %f %f", korean_mean, math_mean, english_mean);
        FILE* evaluation_file = fopen("evaluation.txt", "w");
        if (evaluation_file != NULL) {
            fprintf(evaluation_file, "%f %f %f", korean_mean, math_mean, english_mean);
            fclose(evaluation_file);
        }
        fclose(student_file);
    }
    return 0;
}
