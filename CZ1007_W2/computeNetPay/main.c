#include <stdio.h>
int main()
{
 int hours;
 float tax, grossPay, netPay;

 printf("Enter hours of work: \n");
 scanf("%d", &hours);
 if (hours>40){
    grossPay = (6*40) + ((hours-40)*9);}
 else if (hours<=40){
    grossPay = 6*hours;}
 if (grossPay>=0 && grossPay<=1000){
    tax = (0.1*grossPay);
 }
 else if (grossPay>1000 && grossPay<=1500){
    tax = (0.1*1000)+(grossPay-1000)*0.2 ;
 }
 else
 {
     tax = ((0.1*1000)+(0.2*500)+(grossPay-1500)*0.3) ;
 }
 netPay = grossPay - tax;
 printf("Gross pay = %.2f\n", grossPay);
 printf("Tax = %.2f\n", tax);
 printf("Net pay = %.2f\n", netPay);
 return 0;
}
