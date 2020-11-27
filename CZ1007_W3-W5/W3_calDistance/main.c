#include <stdio.h>
#include <math.h>
void inputXY(double *x1, double *y1, double *x2, double *y2);
void outputResult(double dist);
double calDistance1(double x1, double y1, double x2, double y2);
void calDistance2(double x1, double y1, double x2, double y2, double *dist);
int main()
{
 double x1, y1, x2, y2, distance=-1;

 inputXY(&x1, &y1, &x2, &y2); // call by reference
 distance = calDistance1(x1, y1, x2, y2); // call by value
 printf("calDistance1(): ");
 outputResult(distance);
 calDistance2(x1, y1, x2, y2, &distance); // call by reference
 printf("calDistance2(): ");
 outputResult(distance); // call by value
 return 0;
}
void inputXY(double *x1, double *y1, double *x2, double *y2)
{
    printf("Input values");
    scanf("%lf %lf %lf %lf", x1, y1, x2, y2);
}
void outputResult(double dist)
{
    printf("%.2f\n", dist);
}
double calDistance1(double x1, double y1, double x2, double y2)
{
double a,b,c,d;
a=x2-x1;
b=a*a;
c=y2-y1;
d=c*c;
return (sqrt(b+d));

 }
void calDistance2(double x1, double y1, double x2, double y2, double
*dist)
{
double a,b,c,d;
a=x2-x1;
b=a*a;
c=y2-y1;
d=c*c;
*dist = (sqrt(b+d));}
