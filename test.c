 #include<stdio.h>

 int main()
{
    int i;
    printf("enter mark;");
    scanf("%d",&i);
    if(i>=80)
    {
        printf("A grade");
    }
    else if(i>=60)
    {
        printf("B grade");

    }
    else if(i>=50)
    {
        printf(" c grade");
    }
    else 
    {
        printf("D grade");
    }
    return 0;
 }

