#include <stdio.h>

int main() {
    int num=1;
    while(num<=5)
    {
        int jum=1;
        while(jum<=num){
        printf("%d",jum);
        jum++;
       }
       printf("\n");
       num++;
    }
    
    return 0 ;
}
