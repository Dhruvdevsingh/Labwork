// Program to calculate area and perimeter of circle,square and rectangle
#include<stdio.h>
void main()
{
    float r;
    printf("Enter the Radius:");
    scanf("%f",&r);
    float area,peri;
    area=3.14*r*r;
    peri=2*3.14*r;
    printf("Area of Circle is:%.2f\n",area);
    printf("Perimeter of circle is:%.2f\n",peri);
    float s,A,P;
    printf("Enter the Side:");
    scanf("%f",&s);
    A=s*s;
    P=4*s;
    printf("Area of Square is:%.2f\n",A);
    printf("Perimeter of Square is:%.2f\n",P);
    float l,b,Area ,Peri;
    printf("Enter the Length and Breadth:");
    scanf("%f%f",&l,&b);
    Area=l*b;
    Peri=2*(l+b);
    printf("Area of Rectangle is:%.2f\n",Area);
    printf("Perimeter of Rectangle is:%.2f\n",Peri);
    }