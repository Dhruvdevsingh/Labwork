// program for Arithematic operations
#include<stdio.h>
void main()
{
    float a,b,c;
    printf("Enter Two Numbers:");
    scanf("%f%f",&a,&b);
    c=a+b;
    printf("Sum=%.2f\n",c);
    c=a-b;
    printf("Diffrence=%.2f\n",c);
    c=a*b;
    printf("Product=%.2f\n",c);
    c=a/b;
    printf("Divide=%.2f\n",c);
}
