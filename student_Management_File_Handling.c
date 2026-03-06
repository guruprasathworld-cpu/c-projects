#include <stdio.h>
#include <string.h>

void student(int Id, char Name[50], float marks) {
    FILE *st;
    st = fopen("Student status.txt", "w");
    if (st != NULL) {
        fprintf(st, "%d\n", Id);
        fprintf(st, "%s\n", Name);
        fprintf(st, "%.2f\n", marks);
        fclose(st);
    } else {
        printf("Error opening file.\n");
    }
}

int main() {
    int I;
    char N[50];
    float M;

    printf("Enter student ID:\n");
    scanf("%d", &I);

    printf("Name:\n");
    scanf("%s", N);

    printf("Marks:\n");
    scanf("%f", &M);

    student(I, N, M);

    return 0;
}