#include<stdio.h>

 
    int g(int A,int B)
    {
        int D;
        D=A+B;
        return D; 
    }


    int main()
    {
    
      int A;
      int B;
      printf("Enter A:\n");
      scanf("%d",&A);
      printf("Enter B:\n");
      scanf("%d",&B);
      int D;
      D=g(A,B);
      printf("%d",D);
      return 0;
    }
