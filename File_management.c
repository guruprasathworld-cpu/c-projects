#include<stdio.h>

int main()
{
    FILE*fp;
    fp=fopen("IP.txt","w");
    if(fp=NULL){
        printf("Error");
        return 1;
    }

    fprintf(fp,"The first File");
    fclose(fp);
    printf("Data written successfully\n");
    return 0;
}