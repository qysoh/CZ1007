#include <stdio.h>
int main()
{
 int studentNumber = 0, mark;

 printf("Enter Student ID: \n");
 scanf("%d", &studentNumber);
 while (studentNumber != -1){
    printf("Enter Mark: ");
    scanf("%d", &mark);
    switch ((mark+5)/10){
case 10:
case 9:
case 8:
    printf("Grade = A\n");
    break;
case 7: printf("Grade = B\n");
 break;
 case 6: printf("Grade = C\n");
 break;
 case 5: printf("Grade = D\n");
 break;
 default: printf("Grade = F\n");
 }
 printf("Enter Student ID: \n");
 scanf("%d", &studentNumber);
 }
 return 0;
}
