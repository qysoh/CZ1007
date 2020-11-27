#include <stdio.h>
int main()
{
 int num;
 int i, x, y;
 printf("Enter an input number (between 1 and 9): \n");
 scanf("%d", &num);
 printf("Multiplication Table: \n");
 printf("  ");
 for (i=1; i<=num; i++)
    printf("%d",i);
printf("\n");
for (x=1;x<=num;x++){
    printf("%d ", x);
 for (y=1; y<=x; y++)
 printf("%d ", x*y);
 printf("\n");
}

 return 0;
}
