#include <stdio.h>
#include <string.h>

struct book {
    int No;
    char Author [50];
    float price;
};

int main()
{
    int a;

    struct book stoic;
    stoic.No=5;
    stoic.price=22.32;
    strcpy (stoic.Author,"greek philosphers");

    printf("%d\n",stoic.No);
    printf("%f\n",stoic.price);
    printf("%s\n",stoic.Author);
    return 0;

}