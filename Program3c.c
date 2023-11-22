// Program to calculate area and perimeter of circle,square and rectangle based on user choice
#include<stdio.h>
void main()
{
int n,s,c,d,l,b,r;
float a,p,area,peri,A,P;
printf("1.Circle\n2.Rectangle\n3.Square\nEnter your choice:");
scanf("%d",&n);
switch(n)
{
 case 1:
 printf("Enter the radius=");
 scanf("%d",&r);
 a=3.14*r*r;
 p=2*3.14*r;
 printf("Area odf the circle is=%.2f\n",a);
 printf("Perimeter of Circle is=%.2f\n",p);
 break;
 case 2:
 printf("Enter the Length and Breadth=");
 scanf("%d%d",&l,&b);
 area=l*b;
 peri=2*(l+b);
 printf("Area of the Rectangle is=%.2f\n",area);
 printf("Perimeter of the Rectangle is=%.2f\n");
 break;
 case 3:
 printf("Enter the side=");
 scanf("%d",&s);
 A=s*s;
 P=4*s;
 printf("Area of the Square is=%.2f\n",A);
 printf("Perimeter of the Square is=%.2f\n",P);
 break;
 default:
 printf("Wrong Value");
}
}