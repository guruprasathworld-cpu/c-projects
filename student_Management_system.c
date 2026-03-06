#include<stdio.h>

typedef struct student {
    int id;
    char Name[50];
    float marks;
}student;

int main()
{
    student s1={101,"Guru",90.6};
    printf("%d,%s,%f",s1.id,s1.Name,s1.marks);
    return 0;
}
