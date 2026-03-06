#include<Stdio.h>

int main(int D,int W,int B)
{
    printf("Deposit amount:\n");
    scanf("%d",&D);
    printf("Withdrawal amount:\n");
    scanf("%d",&W);
    B=D-W;
    printf("Bank balance\n");
    printf("%d",B);
}
